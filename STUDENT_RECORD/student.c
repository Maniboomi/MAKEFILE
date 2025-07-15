#include<stdio.h>
#include<string.h>
#include "add_struct.h"
#include "display.h"
int main()
{
	struct student s1, s2;
	strcpy(s1.name, "manikandan");
	s1.age = 21;
	strcpy(s1.dob,"05 11 2003");
	s1.number = 8925355704;
	strcpy(s2.name,"guruprasanth");
        s2.age = 22;
        strcpy(s2.dob,"11 05 2003");
        s2.number = 6374982301;
	display(s1,s2);
	return 0;
}



