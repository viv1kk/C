#include <stdio.h>
#include <conio.h>

void main()
{
int a = 0, b = 0, i, j;
printf("Enter the size of rows and column of Matrices : ");
scanf("%d %d", &a, &b);
int F[a][b];
int S[a][b];
int T[a][b];
printf("Enter the value of Matrix A : ");
for (i = 0; i < a; i++)
for (j = 0; j < b; j++)
scanf("%d", &F[i][j]);
printf("Enter the values of Matrix B : ");
for(i = 0; i < a; i++)
for(j = 0; j < b; j++)
scanf("%d", &S[i][j]);
printf("\n\n\n");
for(i =0; i < a; i++)
{
for(j = 0; j < b; j++)
{
T[i][j] = F[i][j] + S[i][j];
printf("%d\t", T[i][j]);
}
printf("\n");
}
getch();
}