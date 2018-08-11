// Program to evaluate simple expressions of the form value operator value

#include <stdio.h>
int main (void)
{
float a, c;
char b;
printf("\n\nEnter Expression - ");
scanf("%f %c %f", &a, &b, &c);
switch (b)
{
	case '+':
		printf("%.2f\n", a + c);
		break;
	case '-':
		printf("%.2f\n", a - c);
		break;
	case '*':
		printf("%.2f\n", a * c);
		break;
	case '/':
		printf("%.2f\n", a / c);
		break;
	default :
		printf("Unknown Operator.\n");
		break;
}
return 0;
}