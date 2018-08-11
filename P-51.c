// AM 12:57 02-09-2017
// Program to get the Prime Number

#include <stdio.h>
#include <stdbool.h>
int main (void)
{
int a, b;
bool isPrime;
for (a = 3; a <= 50; a += 2){
	isPrime = true;
	for (b = 2; b < a; b++)
	if (a % b == 0)
	isPrime = false;
	if (isPrime != false)
	printf("%i, ", a);

}
return 0;
}