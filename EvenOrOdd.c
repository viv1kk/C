#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a = 0;
	printf("Enter any Integer : ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("This is an Even Number.");
	}
	else
	{
		printf("This ia an Odd Number.");
	}
	_getch();
	return 0;
}