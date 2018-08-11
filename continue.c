#include <stdio.h>
#include <conio.h>

void main ()
{
int a;
for (a =1; a<=10; a++)
{
if(a == 6)
continue;
else
printf("%d\n", a);
}
}