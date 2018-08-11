#include <stdio.h>
#include <conio.h>

int main (void)
{
int a = 100;
int b = 200;
int ret;
ret = max(a, b);
printf("Maximum value is  %d.", ret);
return 0;
}
int max(int num1, int num2)
{
int value;
if(num1 > num2)
value = num1;
else
value = num2;
return value;
}