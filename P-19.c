// Calculating the 200th Triangular number

#include <stdio.h>
int main (void)
{
int n, a ;
a = 0;
for (n = 1; n<=200; n = n +1)
	a = a + n;
printf("The 200th Triangular Number is %i.", a);
return 0;
}