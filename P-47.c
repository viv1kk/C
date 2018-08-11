// PM 10:48 12-08-2017
// program that accepts two integer values typed in by the user. Display the result of dividing the first integer by the second, to three-decimal-place accuracy

#include <stdio.h>
int main (void)
{
int  a, b;
float c;
printf("Enter Numbers to Divide : ");
scanf("%i %i", &a, &b);
c = (float) a / b;
if (b == 0)
printf("Dividing from zero?!?!");
else
printf("%.3f", c);
return 0;
}