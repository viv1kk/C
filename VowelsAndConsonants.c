#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char a;
	printf("Enter any Character : ");
	scanf("%c", &a);
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
	{
		printf("This is a Vowel.");
	}
	else
	{
		printf("This is a Consonant.");
	}
	_getch();
	return 0;
}