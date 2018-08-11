#include <stdio.h>
int main (void)
{
printf("\n\n    n\t   Triangle number\n");
printf("   ---\t -------------------\n");
int a, b;
b = 0;
for (a = 5; a <= 50; a = a+5){
	b = a * (a + 1) / 2;
printf("   %i\t\t%i \n",a ,b);
}
return 0;
}