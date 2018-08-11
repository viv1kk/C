#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *prev, *next;
};

struct node *start = NULL;
struct node *last = NULL;
struct node *memoryAddress()
{
  struct node *addr;
  addr = (struct node *)malloc(sizeof(struct node));
  return (addr);
}

// INSERTION FROM END IN A DOUBLY LINKED LIST

void elementInsertion()
{
  struct node *temp, *t;
  temp = memoryAddress();
  printf("Enter the Number : ");
  scanf("%d", &temp->data);
  printf("\n\n");
  temp->next = NULL;
  temp->prev = NULL;
  if(start == NULL)
  {
    start = temp;
    temp->prev = start;
  }
  else
  {
    t = start;
    while(t->next != NULL)
    {
      t = t->next;
    }
    t->next = temp;
    start->prev = temp;
  }
}

// DELETION OF ELEMENT FORM FIRST IN THE DOUBLY LINKED LIST

void elementDelete()
{
  struct node *temp;
  if(start == NULL)
  {
    printf("List is Empty.\n\n");
  }
  else
  {
    temp = start;
    start = start ->next;
    free(temp);
    printf("Successfully Deleted.\n\n");
  }
}

// TRAVERSING THE LINKED LIST FROM START TO END

void traverse()
{
  struct node *temp;
  if (start == NULL)
    printf("List is Empty.\n\n");
  else
  {
    temp = start;
    while(temp != NULL)
    {
      printf("%d\t", temp->data);
      temp = temp->next;
    }
    printf("\n\n");
  }
}

// SEARCHING AN ELEMENT BY TAKING THE VALUE OF data

void search()
{
  struct node *temp;
    int a, i = 1;
  if(start == NULL)
    printf("List is Empty.\n\n");
  else
  {
    printf("Enter the Data Element to search : ");
    scanf("%d", &a);
    temp = start;
    while(temp != NULL)
    {
      if(temp->data == a)
      {
        printf("This is the element %d of Linked List.\n\n", i);
        break;
      }
      else if(temp->next == NULL && temp->data != a)
      {
        printf("This Element does not exists in this Linked List.\n\n");
      }
      i++;
      temp = temp->next;
    }
  }
}

// INPUT FORM USER TO SELECT THE DESIRED OPERATION

int form()
{
  int a;
  printf("Enter your Choice : ");
  scanf("%d", &a);
  return (a);
}

void main()
{
  printf("1. Insertion of an Element in the list.\n");
  printf("2. Deleting an Element from the list.\n");
  printf("3. Traverse all elements in the list.\n");
  printf("4. Searching an Element.\n");
  printf("5. Exit.\n\n");

  while(1)
  {
    switch(form())
    {
      case 1: elementInsertion();
              break;
      case 2: elementDelete();
              break;
      case 3: traverse();
              break;
      case 4: search();
              break;
      case 5: exit(0);
              break;
      default:  printf("Invalid Input...\n\n");
                break;
    }
  }
}
