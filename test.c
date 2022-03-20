#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *buf = (char*)malloc(4096);
	memset(buf,0,100*4096);
	printf("master");
	printf("buffer address = 0x%p\n",buf);
	free(buf);
	return 0;
}
