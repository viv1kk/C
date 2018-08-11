// Program to generate a table of prime numbers

#include <stdio.h>
int main (void)
{
int a, b;
_Bool prime;
for (a = 2; a <= 50; a++){
	prime = 1;
	for (b = 2; b < a; b++)
	if (a % b == 0)
	prime =0;
	if (prime != 0)
	printf("%i, ", a);
}
return 0;
}