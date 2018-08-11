#include <stdio.h>
void main()
{
int a = 0, b = 0;
printf("Enter the number to be Reversed  : ");
scanf("%d", &a);
while(a != 0)
{
b = a % 10;
printf("%d", b);
a = a / 10;
}
}