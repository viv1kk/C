#include <stdio.h>
void main()
{
int a = 0;
printf("Enter the number to check (even / odd) : ");
scanf("%d", &a);
if (a % 2 == 0)
printf("This is an even number.");
else
printf("This is an odd number.");
}