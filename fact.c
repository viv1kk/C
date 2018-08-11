#include <stdio.h>
#include <conio.h>

void main ()
{
int a, b, i;
printf("Enter the number for Factorial : ");
scanf("%d", &a);
i = a - 1;
printf("%d! = ", a);
while (i > 0)
{
b = a*i;
a = b;
i--;
}
printf("%d", b);
}