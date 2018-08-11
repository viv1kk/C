#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	float radius = 0, area = 0;
	const float pi = 22.0 / 7;
	int clrscr();
	printf("Enter the radius of Circle (m): ");
	scanf("%f", &radius);
	area = pi * radius * radius;
	printf(" = %f", area);
	_getch();
	return 0;
}