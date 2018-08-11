// 09:10 PM 26-11-2017
// Demonstration for using User Defined function

#include <stdio.h>
#include <conio.h>

int main (void)
{
int a, b;
printf("Enter the value of A : ");
scanf("%d", &a);
printf("Enter the value of B : ");
scanf("%d", &b);
int ret;
ret = max(a, b);
printf("%d is the large number.", ret);
getch();
return 0;
}

int max(int num1, int num2)
{
int res;
if (num1 > num2)
res = num1;
else
res = num2;
return res;
}