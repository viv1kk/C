// PM 11:22 08-08-2017
// Program to impliment the sign function

#include <stdio.h>
int main (void)
{
int a, b;
printf("\n\nEnter Number - ");
scanf("%i", &a);
if(a < 0)
b = -1;
else if(a == 0)
b = 0;
else
b = 1;
printf("Sign = %i\n\n", b);
return 0;
}