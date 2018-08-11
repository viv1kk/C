#include <stdio.h>
#include <conio.h>
  int fibonacci(int);
int main()
{
  int fibo, a, c;
  printf("Enter the number : ");
  scanf("%d", &a);
  for(int i = 1; i<=a; i++)
  {
    fibo = fibonacci(c);
    printf("%d\n", fibo);
    c++;
  }
  return 0;
}
int fibonacci(int a)
{
  if(a <= 1)
  {
    return a;
  }
  else
  {
    return(fibonacci(a-1)+fibonacci(a -2));
  }
}
