// Asking the User for Input

#include <stdio.h>
int main (void)
{
int a, b, c;
printf("\n\nEnter Triangle number you want - ");
scanf("%i", &b);
a = 0;
for (c = 1; c <= b; ++c)
	a = a + c;
printf("Triangular number %i is %i\n\n", b, a);
return 0;
}