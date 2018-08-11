// PM 11:09 29-08-2017
#include <stdio.h>
int main (void)
{
int value, output = 0;
printf("Enter number : ");
scanf("%i", &value);
if (value > 0)
	{
while (value != 0){
	output = value % 10;
	printf("%i", output);
	value = value / 10;
		}
	}
else if (value < 0){
value = -value;
	while (value != 0){
	output = value % 10;
	printf("%i", output);
	value = value / 10;
		}
printf("-");
	}
else if (value == 0)
	printf("The reverse of zero is zero");
else
	printf("Use Numbers only.");
return 0;
}