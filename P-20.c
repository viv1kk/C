// Program to generate a table of triangular numbers

#include <stdio.h>
int main (void)
{
printf("TABLE OF TRIANGULAR NUMBER\n\n");
printf(" \tn\tSum from1 to n\n");
printf("\t---\t---------------\n");
int a, b;
a = 0;
for (b = 1; b<=10; b = b + 1){
	a = a + b;
printf("\t%i\t\t%i\n", b, a);
}
return 0;
}