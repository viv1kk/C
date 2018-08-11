#include <stdio.h>
#include <conio.h>

void main (void)
{
int a, i, j;
printf("Enter the number of lines : ");
scanf("%i", &a);
printf("\n\n");
for(i = 1; i <= a; i++)
{
for(j = 1; j <= i; j++)
printf("*");
printf("\n");
}
getch();
}