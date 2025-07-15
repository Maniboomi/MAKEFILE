#include<stdio.h>
#include "display.h"
void display(struct student s1,struct student s2)
{
	printf("student 1 Name : %s\n",s1.name);
	printf("student 1 age : %d\n",s1.age);
	printf("student 1 dob : %s\n",s1.dob);
	printf("student 1 number : %ld\n",s1.number);
	printf("\n");
	printf("student 2 Name : %s\n",s2.name);
	printf("student 2 age : %d\n",s2.age);
	printf("student 2 dob : %s\n",s2.dob);
	printf("student 2 number : %ld\n",s2.number);
}

