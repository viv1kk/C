// PM 05:02 07-08-2017
#include <stdio.h>
int main (void)
{
int a, b, c, d = 0;

printf("Enter number - ");
scanf("%i", &a);
c = a;
while (a != 0){
	b = a % 10;
	 d = d + b;
	a = a / 10;
}
printf("%i\n", c);
printf("%i         %i", c, d);
return 0;
}