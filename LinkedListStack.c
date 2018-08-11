#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *addr;
};

struct node *stack = NULL;

struct node *createNode()
{
  stack = (struct node *)malloc (sizeof(struct node));
}

void push()
{
  int item;
  struct node *newNode, *temp;
  newNode = createNode();

  if(stack == NULL)
  {
    stack = newNode;
    newNode->addr = NULL;
  }
  else
  {
     temp = stack;
     printf("Enter the Number : ");
     scanf("%d", &item);
     printf("\n%d is Successfully Inserted into the Stack.\n\n", item);
     newNode->data = item;
     newNode->addr = temp;
     stack = newNode;
  }
}

int isEmpty()
{
  if(stack == NULL)
  {
    return (1);
  }
  else
  {
    return (0);
  }
}

void pop()
{
  struct node *temp;

  if (isEmpty() == 1)
  {
    printf("\nStack is Empty.\n\n");
  }
  else
  {
    temp = stack;
    printf("\n%d is Successfully Deleted from Stack.\n\n", temp->data);
    stack = temp->addr;
  }
    free(temp);
}


void peek()
{
    if(stack == NULL)
    {
      printf("\nStack is Empty.\n\n");
    }
    else
    {
      printf("\n%d, is Currently the top of Stack.\n\n", stack->data);
    }
}

void deleteStack()
{
  while (stack != NULL)
  {
    pop();
  }
}

void main()
{
  int choice;
  printf("\n\n1. Push.\n");
  printf("2. Pop.\n");
  printf("3. Peek.\n");
  printf("4. Delete Stack.\n");
  printf("5. Exit.\n\n");

  while (1)
  {
    printf("Enter your Choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1: push();
              break;
      case 2: pop();
              break;
      case 3: peek();
              break;
      case 4: deleteStack();
              break;
      case 5: exit(0);
              break;
      default:printf("\nInvalid Input.\n");
              break;
    }
  }
  getch();
}
