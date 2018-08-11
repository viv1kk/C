// Write a program to check the interger is even or odd

#include <stdio.h>
#include <conio.h>

void main (void)
{
int a;
printf("Enter any number (int) : ");
scanf("%i", &a);
if (a % 2 == 0)
printf("Integer you typed in is an even numer");
else
printf("Integer you typed in is an odd numer");
getch();
}