#include <stdio.h>
void main()
{
char a;
printf("Enter ratings from A - E : ");
scanf("%c", &a);
switch(a)
{
case 'A':printf("Excellent");
	break;
case 'B':printf("Good");
	break;
case 'C':printf("Nice");
	break;
case 'D':printf("Not Statisfied");
	break;
case 'E':printf("Bad");
	break;
default : printf("Invalid Input!");
	break;
}
}