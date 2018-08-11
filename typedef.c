// 09:02 PM 22-11-2017
// Demonstration of typedef

#include <stdio.h>
int main  (void)
{
typedef int x;
x a = 0, b = 0;
x c;
printf("Enter No.1 : ");
scanf("%d", &a);
printf("Enter No.2 : ");
scanf("%d", &b);
c = a + b;
printf("No.1 + No.2 = %d", c);
return 0;
}