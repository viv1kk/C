#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a[3];
	float f[3];
	printf("Type Conversion :\n\n");
	printf("Enter any Integer to Convert : ");
	scanf("%d", &a[0]);
	printf("\nResults :\n");
	printf("Before Conversion : %d\n", a[0]);
	f[0] = a[0];
	printf("After Conversion : %f\n", f[0]);
	printf("\n\n");
	printf("Enter any Floating point Number to Convert : ");
	scanf("%f", &f[1]);
	printf("\nResults :\n");
	printf("Before Conversion : %f\n", f[1]);
	a[1] = f[1];
	printf("After Conversion : %d\n", a[1]);
	printf("\n\n\n");
	printf("Type Casting :\n\n");
	printf("Enter any Integer to Convert : ");
	scanf("%d", &a[2]);
	printf("\nResult");
	printf("Before Conversion : %d\n", a[2]);
	f[2] = (float)a[2];
	printf("After Conversion : %f\n", f[2]);
	printf("\n\n");
	printf("Enter any Floating Point Number to Convert : ");
	scanf("%f", &f[3]);
	printf("\nResults :\n");
	printf("Before Conversion : %f\n", f[3]);
	a[3] = (int)f[3];
	printf("After Conversion : %d\n", a[3]);
	_getch();
	return 0;
}