#include <stdio.h>
#include <conio.h>

void main()
{
int a = 0, i;
printf("Enter the number for table : ");
scanf("%d", &a);
for (i = 1; i <=10; i++)
{
printf("%d * %2d = %2d\n", a, i, a * i);
}
getch();
}