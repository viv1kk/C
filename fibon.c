#include<stdio.h>

int main (void)
{
int fibo[10], i;
fibo[0] = 0;
fibo[1] = 1;
printf("\n%d\n%d\n", fibo[0], fibo[1]);
for(i = 2; i <= 10; i++)
{
fibo[i] = fibo[i - 2] + fibo[i - 1];
printf("%d\n", fibo[i]);
}

}