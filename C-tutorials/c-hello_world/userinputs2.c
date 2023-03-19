#include <stdio.h>

/**
 * main - prints out the user inputs
 * Return: 0.
 * scanf reads the user input and prints it
 * out only works for a single string
 */

int main(void)
{
	char name[100];

	printf("Enter your name\n");
	scanf("%s", name);
	printf("Your name is: %s\n", name);
	return (0);
}
