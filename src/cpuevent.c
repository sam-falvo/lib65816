/*
 * lib65816/cpuevent.c Release 1p2
 * See LICENSE for more details.
 *
 * Copyright 2007 by Samuel A. Falvo II
 */

#include <lib65816/cpuevent.h>
#include <stdio.h>

// The presence of both a null and a nil field prevents
// GCC from optimizing away some of the data structure due
// to aliasing concerns.
struct List
{
    CPUEvent *  head;
    void *      null;
    void *      nil;
    CPUEvent *  tail;
};

static volatile struct List eventList;

void
CPUEvent_initialize( void )
{
    eventList.head = (CPUEvent *)(&eventList.null);
    eventList.null = 0;
    eventList.nil = 0;
    eventList.tail = (CPUEvent *)(&eventList);
}

void
CPUEvent_elapse( word32 cycles )
{
    eventList.head -> counter -= cycles;
    if( eventList.head -> counter < 0 )
    {
        eventList.head -> counter = 0;
        CPUEvent_dispatch();
    }
}

void
CPUEvent_schedule( CPUEvent *thisEvent, word32 when, CPUHandler *proc )
{
    CPUEvent *p, *q;

    thisEvent -> counter = when;
    thisEvent -> handler = proc;

    p = (CPUEvent *)&eventList;
    q = p -> next;

    while( ( thisEvent -> counter ) && ( q -> next ) )
    {
        /* Newly scheduled event is before 'q', so insert it in front of
         * q and compensate q's countdown accordingly.
         */

        if( thisEvent -> counter < q -> counter )
        {
            p -> next = thisEvent;     thisEvent -> next = q;
            q -> previous = thisEvent; thisEvent -> previous = p;

            q -> counter -= thisEvent -> counter;
            return;
        }
        
        /* Otherwise, q occurs before thisEvent, so we compensate thisEvent's counter
         * as we continue to find the ideal insertion point.
         */

        thisEvent -> counter -= q -> counter;
        if( thisEvent -> counter < 0 ) thisEvent -> counter = 0;
        p = q;
        q = q -> next;
    }

    p -> next = thisEvent;     thisEvent -> next = q;
    q -> previous = thisEvent; thisEvent -> previous = p;
}

void
CPUEvent_dispatch( void )
{
    CPUEvent *p, *nextEvent, *thisEvent;

    thisEvent = eventList.head;
    while( thisEvent -> next )
    {
        if( thisEvent -> counter != 0 ) return;

        /* We need to dequeue the node FIRST, because the called
         * handler may attempt to reschedule the event.
         */

        p = thisEvent -> previous;     nextEvent = thisEvent -> next;
        p -> next = nextEvent;          nextEvent -> previous = p;

        thisEvent -> handler( 0 ); thisEvent = nextEvent;
    }
}

