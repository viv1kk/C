// Program to reverse the digit of a number

#include <stdio.h>
int main (void)
{
int a, b;
printf("Enter the number to be reversed - ");
scanf("%i", &a);
while (a != 0){
	b = a %10;
	printf("%i", b);
	a = a / 10;
}
printf("\n");
return 0;
}