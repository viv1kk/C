// PM 10:21 03-08-2017
#include <stdio.h>
int main (void)
{
printf("\n\n n\t  n(square)\n");
printf("---\t------------\n");
int a, b;
a = 1;
for (b = 1; b<=10; ++b){
	a = b * b;
	printf(" %i\t     %i\n", b, a);
}
printf("\n\n");
return 0;
}