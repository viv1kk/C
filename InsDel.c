#include <stdio.h>
#include <conio.h>

int main (void)
{
	int a, i, index;
	
// INSERTION IN ARRAY

	printf("Enter the number of elements in array : ");
	scanf("%d", &a);
	int n[a];
	printf("Enter the Elements in Array : \n");
	for (i = 0; i < a ; i++)
		scanf("%d", &n[i]);
	printf("Elements in Array : \n");
	for (i = 0; i < a; i++)
		printf("array[%d] = %d\n", i, n[i]);
	a++;
	
/*
	printf("Insert an Element into the Array : ");
	scanf("%d", &n[a-1]);
	printf("Array after insertion : \n");
	for(i = 0; i < a; i++)
		printf("array[%d] = %d\n", i, n[i]);
	getch();
	return 0;
*/
	
	printf("Enter the index you want to insert the Element in the Array : ");
	scanf("%d", &index);
	if(index <= a)
	{
	while (i >= index)
	{
		n[i + 1] = n[i];
		i--;
	}
	}
	else
	{
		printf("Enter the index value <= %d", a);
		return 0;
	}
	printf("Enter the Element : ");
	scanf("%d", &n[index]);
	
	for(i = 0; i < a; i++)
		printf("array[%d] = %d\n", i, n[i]);
	
// DELETION IN ARRAY

	printf("Enter the index you want to delete the Element in the Array : ");
	scanf("%d", &index);
	for ( i = index; i < a ; i++ )
         		n[i] = n[i +1];
	a--;
	printf("\nAfter deletion of element from index %d : \n", index);
	for(i = 0; i < a; i++)
		printf("array[%d] = %d\n", i, n[i]);
	getch();
	return 0;
	
}