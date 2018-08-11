#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
FILE *fp;
fp = fopen("abc.txt", "w");
if(fp == NULL)
{
printf("Cannot Open File.");
exit(1);
}
fclose(fp);
getch();
}