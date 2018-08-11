#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *addr;
};
struct node *start = NULL;
struct node *newnodeAddress()
{
  struct node *m;
  m = (struct node *)malloc(sizeof(struct node));
  return (m);
}
void elementInsertion()
{
  struct node *temp, *t;
  temp = newnodeAddress();
  printf("Enter The number : ");
  scanf("%d", &temp->data);
  printf("\n");
  temp->addr = NULL;
  if(start == NULL)
    start = temp;
  else
  {
    t = start;
    while(t->addr != NULL)
    {
      t = t->addr;
    }
      t->addr = temp;
  }
}
void elementDelete()
{
  struct node *temp;
  if(start == NULL)
    printf("List is Empty.\n\n");
  else
  {
    temp = start;
    start = start->addr;
    free(temp);
    printf("Successfully Deleted.\n\n");
  }
}
void traverseList()
{
  struct node *temp;
  if(start == NULL)
    printf("List is Empty.\n\n");
  else
  {
    temp = start;
    while(temp != NULL)
    {
      printf("%d\t", temp->data);
      temp = temp->addr;
    }
    printf("\n\n");
  }
}
int form()
{
  int a;
  printf("Enter you Choice : ");
  scanf("%d", &a);
  return (a);
}
void main(void)
{
  printf("1. Insertion of an Element in the list.\n");
  printf("2. Deleting an Element from the list.\n");
  printf("3. Traverse all elements in the list.\n");
  printf("4. Exit.\n\n\n");
  while(1)
  {
    switch(form())
    {
      case 1:   elementInsertion();
                break;
      case 2:   elementDelete();
                break;
      case 3:   traverseList();
                break;
      case 4:   exit(0);
                break;
      default : printf("Invalid Input.\n");
                break;
    }
  }
  getch();
}
