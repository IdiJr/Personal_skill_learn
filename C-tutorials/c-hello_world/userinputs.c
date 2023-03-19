#include <stdio.h>

/**
 * main - prints out the user inputs
 * Return: 0.
 */

int main(void)
{
	int x;

	printf("Enter a value\n");
	x = getchar();

	printf("Your value is:\n");
	putchar(x);

	return (0);
}
