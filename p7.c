// Write a program for printing n numbers of Fibonacci series

#include <stdio.h>
#include <conio.h>

void main (void)
{
int i, j;
printf("Enter number of series you want to Print : ");
scanf("%i", &i);
int a = 0;
int b = 1, c = 0;
printf("%i\n%i\n", a, b);
i = i - 2;
for (j = 1; j <=i; j++)
{
c = a + b;
printf("%i\n", c);
a = b;
b = c;
}
getch();
}