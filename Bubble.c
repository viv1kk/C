#include <stdio.h>
#include <conio.h>

int main (void)
{
  int n, i, j, temp;
  printf("Enter the Number of Unsorted Numbers : ");
  scanf("%d", &n);
  int array[n];
  printf("Enter Unsorted Numbers :\n");
  for(i = 0; i < n; i++)
  scanf("%d", &array[i]);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  printf("Sorted Numbers : ");
  for(i = 0; i < n; i++)
  printf("%d\t", array[i]);
  getch();
  return 0;
}
