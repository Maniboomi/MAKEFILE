#include<stdio.h>
#include "write.h"
#include "read.h"
int main()
{
	printf("File Operation\n");
	char filename[100];
	char filefile[100] = "SILICONCRAFT";
	write_operation(filename);
	read_operation(filefile);
	return 0;
}

