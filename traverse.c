#include <stdio.h>
#include <conio.h>

void main()
{
int a = 0, b = 0, i, j;
printf("Enter the row and column of matrix : ");
scanf("%d %d", &a, &b);
int c[a][b];
printf("Enter the values of matrix : ");
for(i = 0; i<a; i++)
for(j = 0; j<b; j++)
scanf("%d", &c[i][j]);
printf("\n\n");
for(i = 0; i<a; i++)
{
for(j = 0; j<b; j++)
printf("%d\t", c[i][j]);
printf("\n");
}
}