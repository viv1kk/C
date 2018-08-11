// Program to reverse the digits of a number using do while loop

#include <stdio.h>
int main (void)
{
int a, b;
printf("Enter the number to be reversed - ");
scanf("%i", &a);
do{
	b = a % 10;
	printf("%i", b);
	a = a / 10;
}
while(a != 0);
printf("\n");
return 0;
}