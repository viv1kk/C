#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct arrayQueue
{
  int front, rear;
  int capacity;
  int *array;
};

struct arrayQueue* queue = NULL;
struct arrayQueue* createQueue(int capacity)
{
  queue = (struct arrayQueue *) malloc(sizeof(struct arrayQueue));
  queue->front = -1;
  queue->rear = -1;
  queue->capacity = capacity;
  queue->array = (int *) malloc(sizeof(int) * capacity);
  return (queue);
}

int isFull()
{
  if((queue->rear+1)%queue->capacity == queue->front)
  {
    return (1);
  }
  else
  {
    return(0);
  }
}

int isEmpty()
{
  if(queue->front == -1)
  {
    return (1);
  }
  else
  {
    return (0);
  }
}
void enQueue(int data)
{
  struct arrayQueue* temp;

  if(isFull())
  {
    printf("\nOverflow.\n\n");
  }
  else
  {
    if(isEmpty)
    {
      queue->front=queue->rear;
    }
    queue->rear = (queue->rear+1)%queue->capacity;
    queue->array[queue->rear] = data;
  }
}

void deQueue()
{
  int data;
  if(isEmpty())
  {
    printf("Queue is Empty.");
  }
  else
  {
    data = queue->array[queue->front];
    if(queue->front == queue->rear)
    {
      queue->front=queue->rear = -1;
    }
    else
    {
      queue->front = (queue->front+1)%queue->capacity;
    }
  }
}
void deleteQueue()
{
  if(queue)
  {
    if(queue->array)
    {
      free(queue->array);
    }
    free(queue);
  }
}

int main()
{
  int size, num;
  printf("Enter the Size of Queue : ");
  scanf("%d", &size);
  queue = createQueue(size);
  int choice;
  printf("\n\n1. EnQueue.\n");
  printf("2. DeQueue.\n");
  printf("3. DeleteQueue.\n");
  printf("4. Exit.");
  while(1)
  {
    printf("Enter your Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1: printf("Enter the Number : ");
              scanf("%d", num);
              enQueue(num);
              break;
      case 2: deQueue();
              break;
      case 3: deleteQueue();
              break;
      case 4: exit(0);
              break;
      default:  printf("Invalid Input.");
                break;
    }
  }
}
