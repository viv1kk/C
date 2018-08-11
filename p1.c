// Write a program to enter your Age Name & Branch Name using Keyboard

#include <stdio.h>
#include <conio.h>

void main (void)
{
char b[20];
int a = 0;
char c[20];
printf("\n\n");
printf("Enter your Name : ");
gets(b);
printf("Enter your Age : ");
scanf("%i", &a);
printf("Enter Branch Name : ");
scanf("%s", &c);
//gets(c);
printf("\n\nInformation :\n");
printf("Name : %s\n", b);
printf("Age : %i\n", a);
printf("Branch : %s\n", c);
getch();
}