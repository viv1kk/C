#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int a;
FILE *fp;
fp = fopen("abc.txt", "w");
if (fp == NULL)
{
printf("No file existed.");
}
else
{ 
fprintf(fp, "Enter any number : ");
fscanf(fp, "%d", &a);
fprintf(fp, "Number typed in is %d", a);
fclose(fp);
}
return 0;
}