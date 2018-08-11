// PM 10:40 12-08-2017
// Program to asks the user to type in two integer values at the terminal. Test these two numbers to determine if the first is evenly divisible by the second,and then display an appropriate message at the terminal

#include <stdio.h>
int main (void)
{
int a, b;
printf("Enter two numbers to check : ");
scanf("%i %i", &a, &b);
if (a % b == 0)
printf("These numbers are evenly divisible.");
else
printf("These numbers are not evenly divisible.");
return 0;
}