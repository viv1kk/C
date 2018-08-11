#include <stdio.h>
int main (void)
{
int a, b;
a = 1;
for(b = 1; b <=10; ++b){
	a = b * b;
printf("%i\t%i\n", b, a);
}

return 0;
}