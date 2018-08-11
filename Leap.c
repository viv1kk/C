#include <stdio.h>
#include <conio.h>

void main()
{
int a;
printf("Enter the Year : ");
scanf("%d", &a);
if(a % 400 == 0)
printf("It's a leap year.");
else if(a % 100 == 0)
printf("It's a Normal Year.");
else if(a % 4 == 0)
printf("It's a Leap year");
else
printf("It's a Normal year.");
}