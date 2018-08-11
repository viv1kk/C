/* Program to evaluate the expression (3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8) */

#include <stdio.h>
int main (void)
{
float c;
c =  ((3.31 * .00000001) * (2.01 *.0000001)) / ((7.16 * .000001) + 2.01 * .00000001);
printf("Solution of Expression is %e",c);	// Answer is in Exponential Form
return 0;
}