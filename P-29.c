// Program for the Factorial from 1 - 10 
#include <stdio.h>
int main (void)
{
printf("\n\n n\t    n!\n");
printf("---\t----------\n");
int a, b, c;
for(a = 1; a <= 10; ++a){
c = 1;
	for(b = 1; b <= a; ++b){
	c = c * b;
}
	printf(" %i\t    %i\n", a, c);
}
return 0;
}