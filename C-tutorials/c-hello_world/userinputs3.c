#include <stdio.h>

/**
 * main - prints out user input
 * Return: 0.
 * fgets takes the input including spaces
 * puts prints out the value fgets takes
 */

int main(void)
{
	char name[100];

	printf("Enter your name:\n");
	fgets(name, 100, stdin);
	puts("Welcome to the world of C\n");
	puts(name);
	return (0);
}
