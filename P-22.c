// Using Nested for Loops

#include <stdio.h>
int main (void)
{
int a, b, c, d;
for (a = 1; a <= 5; ++a){
printf("\n\nEnter the Triangle number you want - ");
scanf("%i", &b);
d = 0;
	for(c = 0; c <= b; ++c)
	d = d + c;
	printf("Triangle number %i is %i.\n\n", b, d);
}
return 0;
}
