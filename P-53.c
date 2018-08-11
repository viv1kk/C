// 11:30 PM 07-10-2017
// demonstrating an array of counter

#include <stdio.h>
int main (void)
{
int rating[11], i, response;

for (i = 0; i <= 10; i++)
rating[i] = 0;

printf("Enter Ratings : \n");
for (i = 0; i <= 19; i++)
{
scanf("%i", &response);
if (response < 1 || response > 10)
printf("Bad Response : %i", response);
else
++rating[response];
}
printf("\n\nRatings\t\tResponse\n");
printf("-------\t\t---------\n");
for (i = 1; i <= 10; ++i)
printf("   %i\t\t     %i\n", i, rating[i]);
return 0;
}