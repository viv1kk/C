// 11:50 PM 22-11-2017
// Generating fibonacci numbers

#include <stdio.h>

int main (void)
{
int a, b, c, d, e;
b = 0;
c = 1;
printf("Enter number : ");
scanf("%d", &a);
printf("%d, %d, ", b, c);
while(e <= a)
{
d = b + c;
printf("%d, ", d);
b = c;
c = d;
e++;
}
return 0;
}