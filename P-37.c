// PM 09:03 08-08-2017
// Program to determine whether the number is Even or Odd
#include <stdio.h>
int main (void)
{
int a, b;
a = 0;
printf("Enter Number - ");
scanf("%i", &a);
b = a % 2;
if (b != 0)
printf("The number is an Odd Number.");
if (b == 0)
printf("The number is an Even Number.");
return 0;
}