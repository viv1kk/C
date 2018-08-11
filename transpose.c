#include <stdio.h>
#include <conio.h>

void main()
{
int a =0, b = 0, i, j;
printf("Enter the size of rows and column  of Matrix : ");
scanf("%d %d", &a, &b);
int M[a][b];
printf("Enter the values of Matrix : ");
for (i = 0; i < a; i++)
for (j = 0; j < b; j++)
scanf("%d", &M[i][j]);
printf("\n\n\n");
printf("Before Transpose :\n\n");
for (i = 0; i < a; i++)
{
for (j = 0; j < b; j++)
printf("%d\t", M[i][j]);
printf("\n");
}
printf("After Transpose : \n\n");
for(j = 0; j < a; j++)
{
for(i = 0; i < b; i++)
printf("%d\t", M[i][j]);
printf("\n");
}
getch();
}