// Write a program to find the factorial of a scanned number

#include <stdio.h>
#include <conio.h>

void main (void)
{
int a = 0, b = 1, i;
printf("Enter number to find Factorial (!) : ");
scanf("%i", &a);
for (i = 1; i <= a; i++)
{
b = b * i;
}
printf("%i", b);
getch();
}