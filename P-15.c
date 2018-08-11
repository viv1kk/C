// program to evaluate the polynomial  3x^3 - 5x^2 +6 for x = 2.55
#include <stdio.h>
int main (void)
{
float x = 2.55, y;
y = 3*(x*x*x) - 5*(x*x) + 6;
printf("the solution of the Polynomial is %f", y);
return 0;
}