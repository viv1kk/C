// 11:31 PM 22-11-2017
// Demonstration for Round off the Float type number

#include <stdio.h>
int main (void)
{
float a = 0, b = 0, c = 0;
printf("Enter No.1 : ", a);
scanf("%f", &a);
printf("Enter No.2 : ", b);
scanf("%f", &b);
c = a + b;
printf("No.1 + No.2 = %.3f", c);
return 0;
}