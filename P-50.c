// PM 11:55 01-09-2017
// Program to print Numbers in English

#include <stdio.h>
int main (void)
{
int value = 0, reversedval = 0, n = 0, digit;
printf("Enter Number : ");
scanf("%i", &value);

do
{
reversedval = (reversedval * 10) + value % 10;

/* This algorithm is Used because after termination of loop it holds the whole value of execution 
eg:  if we use this formula (using the value of reversedval = 21) then it sends both 2 and 1 to the next loop.
on the other hand if we use the algorithm (reversedval = value % 10) then after execution of loop (using the value of reversedval = 21) then it sends only 1 to the next loop. */

value = value / 10;
n++;
}
while (value != 0);
do 
{
digit = reversedval % 10;
reversedval = reversedval / 10;
n--;

switch (digit)
{
case 0:	printf("Zero ");
	break;
case 1:	printf("One ");
	break;
case 2:	printf("Two ");
	break;
case 3:	printf("Three ");
	break;
case 4:	printf("Four ");
	break;
case 5:	printf("Five ");
	break;
case 6:	printf("Six ");
	break;
case 7:	printf("Seven ");
	break;
case 8:	printf("Eight ");
	break;
case 9:	printf("Nine ");
	break;

default:	printf("Unsupported Input.");
	break;
}
}
while (n != 0);
return 0;
}