// PM 11:35 08-08-2017
// Program to categorize a single character that is entered at the terminal

#include <stdio.h>
int main (void)
{
char c;
printf("Enter any Character - ");
scanf("%c", &c);
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
printf("It's a Alphabetic character.");
else if (c >= '0' && c <= '9')
printf("it's a Numeric Character.");
else
printf("It's a Special Character.");
return 0;
}