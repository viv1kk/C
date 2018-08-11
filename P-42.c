// PM 09:20 09-08-2017
//Program to evaluate simple expressions of the form number operatop number

#include <stdio.h>
int main (void)
{
float a, c;
char b;
printf("\n\nEnter Expression - ");
scanf("%f %c %f", &a, &b, &c);
if (b == '+')
printf("%.2f\n", a + c);
else if (b == '-')
printf("%.2f\n", a - c);
else if (b == '*')
printf("%.2f\n", a * c);
else if(b == '/'){
if(c == 0)
printf("Division by Zero !");
 else
printf("%.2f\n", a / c);
}
else
printf("Unknown Operator.");
return 0;
}