/* To round off an integer i to the next largest even multiple of another integer j */
#include <stdio.h>
int main (void)
{
int i, j, a;		// Initialization of Variables

i = 256;
j = 7;
a = i + j - i % j;
printf("the next largest even multiple for dividing %i form %i is %i.\n", i, j, a);

i = 365;
j = 7;
a = i + j - i % j;
printf("the next largest even multiple for dividing %i form %i is %i.\n", i, j, a);

i = 12258;
j = 23;
a = i + j - i % j;
printf("the next largest even multiple for dividing %i form %i is %i.\n", i, j, a);

i = 996;
j = 4;
a = i + j - i % j;
printf("the next largest even multiple for dividing %i form %i is %i.\n", i, j, a);

return 0;
}