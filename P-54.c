// 09:27 PM 14-10-2017
// Program to demonstrate printing Fibonacci Numbers

#include <stdio.h>

int main (void)
{
int Fibo[15], i;
Fibo[0] = 0;
Fibo[1] = 1;

for (i = 2; i < 15; ++i)
Fibo[i] = Fibo[i - 2] + Fibo[i - 1];

for (i = 1; i < 15; ++i)
printf("%i\n", Fibo[i]);

return 0;
}