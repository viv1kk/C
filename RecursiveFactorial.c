#include <stdio.h>
#include <conio.h>

int main()
{
  int a, fact;
  int factorial(int);
  printf("Enter the Number : ");
  scanf("%d", &a);
  fact = factorial(a);
  printf("%d! = %d", a, fact);
  getch();
  return (0);
}

int factorial(int a)
{
  int f;
  if(a == 0)
  {
    return (1);
  }
  else
  {
    f = a * factorial(a-1);
    return (f);
  }
}
