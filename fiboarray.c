#include <stdio.h>
void main()
{
int a[15], i;
a[0] = 0;
a[1] = 1;
printf("%d\n%d\n", a[0], a[1]);
for (i = 2; i < 15; ++i)
{
a[i] = a[i - 1] + a[i-2];
}
for (i = 2; i < 15; ++i)
printf("%d\n", a[i]);
}