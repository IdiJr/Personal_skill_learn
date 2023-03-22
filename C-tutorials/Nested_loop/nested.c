#include <stdio.h>
/**
 * main - prints out numbers from 0 to 4
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 4; i++)
	{
		printf("Start of outer loop %d\n", i);
		for (j = 0; j <= 4; j++)
	{
		printf("Inner loop number %d\n", j);
	}
	printf("End of outer loop %d\n", i);
	}
	return (0);
}
