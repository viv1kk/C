#include <stdio.h>
int main (void)
{
int c, n, number, triangularNumber, counter;
printf("Enter the numbers of Triangle number you want to Calculate  - ");
scanf("%i", &c);
for(counter = 1; counter <= c; ++counter){
printf ("What triangular number do you want? ");
scanf ("%i", &number);
triangularNumber = 0;
for ( n = 1; n <= number; ++n )
triangularNumber += n;
printf ("Triangular number %i is %i\n\n", number, triangularNumber);
}
return 0;
}