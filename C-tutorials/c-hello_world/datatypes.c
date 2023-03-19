#include <stdio.h>

/**
 * main - prints out the size of the datatype
 * Return: 0 on success.
 */

int main(void)
{
	int y = 15;
	float a = 5.35;
	char b = 'T';
	char name[] = "Ali Baba Jr. Idi";

	printf("Welcome to the world of C, %s\n", name);
	printf("size of int is %ld byte(s)\n", sizeof(int));
	printf("size of float is %ld byte(s)\n", sizeof(float));
	printf("size of char is %ld byte(s)\n", sizeof(char));
	return (0);
}
