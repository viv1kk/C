#include <stdio.h>
#include <conio.h>

void main()
{
int a = 0;
printf("Enter  the  year : ");
scanf("%d", &a);
if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
printf("It's a Leap year.");
else
printf("It's a Normal Year.");
}