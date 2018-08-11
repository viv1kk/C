#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n, i, j, temp, position, a[50];
	printf("Enter the Number of Elements : ");
	scanf("%d", &n);
	printf("Enter the Unsorted Numbers : \n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++)
	{
		position = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[position] > a[j])
			{
				position = j;
			}
		}
		if (position != i)
		{
			temp = a[position];
			a[position] = a[i];
			a[i] = temp;
		}
	}
	printf("Sorted Number : ");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	_getch();
	return 0;
}