// PM 09:21 29-08-2017
// Program for Simple Printing Calculator

#include <stdio.h>
int main (void)
{
float value, output;
char operator;
printf("Begin Calculation :\n");
scanf("%f %c", &value, &operator);
while (operator != 'e' || operator != 'E')
	{
	switch (operator)
		{
	case 's':
	case 'S':	output = value;
		printf(" = %.3f\n", output);
		scanf("%f %c", &value, &operator);
		break;
	case '+':	output = output + value;
		printf(" = %.3f\n", output);
		scanf("%f %c", &value, &operator);
		break;
	case '-':	output = output - value;
		printf(" = %.3f\n", output);
		scanf("%f %c", &value, &operator);
		break;
	case '*':	output = output * value;
		printf(" = %.3f\n", output);
		scanf("%f %c", &value, &operator);
		break;
	case '/':	if (value == 0)
		printf("Division by Zero.\n");
		else
		output = output / value;
		printf(" = %.3f\n", output);
		scanf("%f %c", &value, &operator);
		break;
	case 'e':
	case 'E':	output = output + value;
		printf(" = %.3f\n", output);
		printf("End of Calculation.");
		return 0;					// it terminates the program after execution
		break;

	default:	printf("Unsupported Input.");
		return 0;
		break;
		}
	}
return 0;
}