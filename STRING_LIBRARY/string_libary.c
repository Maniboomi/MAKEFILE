#include<stdio.h>
#include "strcpy.h"
#include "strlen.h"
int main()
{
	char b[] = "Manikandan";
	char c[100];
	char *ch = starcpy(c,b);
	int chh = starlen(b);
	printf("string copy (strcpy) : %s\n",ch);
	printf("string length (strlen) : %d\n",chh);
	return 0;
}

