// Write a program to swap two numbers using three variables

#include <stdio.h>
#include <conio.h>

void main (void)
{
int a, b, temp;
printf("Enter the value of a : ");
scanf("%i", &a);
printf("Enter the value of b : ");
scanf("%i", &b);
temp = a;
a = b;
b = temp;
printf("\n\nValues After Swapping : \n");
printf("Value of a : %i\n", a);
printf("Value of b : %i", b);
getch();
}