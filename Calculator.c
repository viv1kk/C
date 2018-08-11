#include <stdio.h>
#include <conio.h>
void main()
{
int a = 0, i;
float b = 0, d = 0;
char c;
printf("Enter how much times you want to use Calculator : ");
scanf("%d", &a);
for(i = 1; i <=a; i++)
{
printf("Enter the expression : ");
scanf("%f %c %f", &b, &c, &d);
switch(c)
{
case '+': printf(" = %.3f\n", b + d);
	break;
case '-': printf(" = %.3f\n", b - d);
	break;
case '*': printf(" = %.3f\n", b * d);
	break;
case '/': printf(" = %.3f\n", b / d);
	break;
case '%': printf(" = %d\n", (int)b % (int)d);
	break;
default : printf("Invalid Character!\n");
	break;
}
}
getch();
}