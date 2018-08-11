#include <stdio.h>
#include <conio.h>

int main (void)
{
	int r, c, i, j;

	printf("Enter the size of matrix : \n");
	printf("Enter Rows : ");
	scanf("%d", &r);
	printf("Enter Columns : ");
	scanf("%d", &c);
	int mat1[r][c];
	int mat2[r][c];
	int  res [r][c];
	printf("Enter the Elements of Matrix 1 : \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("Enter the Elements of Matrix 2 : \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("\nThe sum of Two Matrices are :\n \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			res[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d\t", res[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}