#include <stdio.h>
int main (void)
{
int a;
printf("Enter Number - ");
scanf("%i", &a);
printf("The Absolute Value of %i", a);
if (a < 0)
a = -a;
printf(" is %i.", a);
return 0;
}