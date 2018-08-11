// PM 10:33 08-08-2017
// Program to determine if the year is a Leap Year

#include <stdio.h>
int main (void)
{
int a, b, c, d;
printf("\n\nEnter Year - ");
scanf("%i", &a);
b = a % 4;
c = a % 100;
d = a % 400;
if (b == 0 && c != 0 || d == 0)
printf("This is a Leap Year...\n\n");
else
printf("This is not a Leap Year...\n\n");
return 0;
}