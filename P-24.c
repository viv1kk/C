/* Programs to find the greatest common divisor of two nonnegative integer values */

#include <stdio.h>
int main (void)
{
int a, b, c;
printf("Enter numbers - ");
scanf("%i%i", &a, &b);
while(b != 0){
	c = a % b;
	a = b;
	b = c;
}
	printf("The  Greatest common divisor is %i.\n", a);
return 0;
} 