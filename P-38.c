// PM 09:38 08-08-2017
// Program for determining Even or Odd Number Using if, else 

#include <stdio.h>
int main (void)
{
int a = 0;
printf("\n\nEnter Number - ");
scanf("%i", &a);
if (a % 2 != 0)
printf("The number is an Odd Number.\n\n");
else
printf("The number is an Even Number.\n\n");
return 0;
}