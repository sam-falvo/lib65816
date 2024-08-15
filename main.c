#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cpu.h"
#include "cpuevent.h"

int trace;
int no_io;

#define CODE_START 0x200
#define MEM_MAX 1048576

byte addressSpace[MEM_MAX];

byte BlockingRead( void )
{
    return (byte)( getchar() );
}

byte NonBlockingRead( void )
{
    return 0x00;
}

void Emit( byte b )
{
    putchar( (int)b );
    fflush(stdout);
}

void EMUL_handleWDM( byte opcode, word32 timestamp )
{
}

void EMUL_hardwareUpdate( word32 timestamp )
{
}

byte MEM_readMem( word32 address,word32 timestamp, word32 emulFlags )
{

  address &= 0xFFFFFF;

  if( address > 0x3FFFFF )
    return 0;

  if( address == 0x000001 && !no_io)    return BlockingRead();

  return addressSpace[address];
}

void MEM_writeMem( word32 address, byte b,word32 timestamp )
{

  if( address == 0x000000 ){
    if(b==0)
      exit(0);
    Emit(b);
    return;
  }

  addressSpace[address] = b;
}

int main(int argc, char **argv )
{
    FILE *f = 0;

    CPUEvent_initialize(); // now needed

    if(argc >= 2)
      f = fopen(argv[1], "r");

    if(!f){
      fprintf(stderr,"Could not open <%s>\n", argv[1]);
      exit(EXIT_FAILURE);
    }

    fread(&addressSpace[CODE_START], sizeof(addressSpace), 1, f);
    fclose(f);

    CPU_reset();
    addressSpace[0xfffc] = CODE_START & 0xFF;
    addressSpace[0xfffd] = (CODE_START >> 8) & 0xFF;

    if(argc >= 3 && !strcmp("dbg", argv[2]))
      CPU_setTrace(1);
    if(argc >= 3 && !strcmp("trace",argv[2])){
      CPU_setTrace(1);
      trace = 1;
    }
    CPU_run();

    return 0;
}
