// PM 09:44 11-08-2017
// Program to generate a table of prime number

#include <stdio.h>
#include <stdbool.h>
int main (void)
{
int a, b;
bool prime;		// Using Header File 
for (a = 2; a <= 50; ++a){
	prime = true;
	for (b = 2; b < a; ++b)
	if (a % b == 0)
	prime = false;
	if (prime != false)
	printf("%i, ", a);
}
return 0;
}