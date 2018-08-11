#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// A structure to represent a stack

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* stack = NULL;

struct Stack* createStack(unsigned capacity)
{
    stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index

int isFull()
{   if(stack->top == stack->capacity - 1)
      return (1);
    else
      return (0);
}

// Stack is empty when top is equal to -1

int isEmpty()
{
  if (stack->top == -1)
    return (1);
  else
    return (0);
}

// Function to add an item to stack.  It increases top by 1

void push(int item)
{
  if (!isFull())
  {
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n\n", item);
  }
    else
      printf("Stack is Full.\n\n");
}

// Function to remove an item from stack.  It decreases top by 1

void pop()
{
  if (!isEmpty())
  {
    printf("%d is Successfully popped out.\n\n", stack->array[stack->top]);
    stack->top--;
  }
  else
    printf("\nStack is Empty.\n\n");
}

// Menu Driven program to test above functions

int main()
{
  int a, num;
  int choice;
    printf("\n\nEnter the Size of Stack : ");
    scanf("%d", &a);
    struct Stack* stack = createStack(a);

    printf("\n1. Push.\n");
    printf("2. Pop.\n");
    printf("3. Exit.\n\n");

    while(1)
    {
      printf("Enter your Choice : ");
      scanf("%d", &choice);
      switch(choice)
      {
        case 1:   printf("Enter the Number : ");
                  scanf("%d", &num);
                  printf("\n");
                  push(num);
                  break;
        case 2:   pop();
                  break;
        case 3:   exit(0);
                  break;
        default:  printf("Invalid Input.\n\n");
                  break;
      }
    }
    getch();
    return 0;
}
