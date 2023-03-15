#include <stdio.h>

/**
 * main - prints hello to user
 * Return: 0 on success
 */

int main(void)
{
	char name[100];

	printf("Enter your name\n");
	fgets(name, 100, stdin);

	printf("your name is %s\n", name);
	puts("My name will be below:\n");
	puts(name);

	return (0);
}
