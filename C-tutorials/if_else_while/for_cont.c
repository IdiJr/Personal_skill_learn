#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 10; i++)  /*for loop is used to do repeated tasks, "if" statement is required to use "continue" in a code */
	{
		if (i == 6)
			continue;
		printf("Start of outer loop %d\n", i);
		for (int j = 0; j <= 5; j++)
		{
			printf("Inner loop %d\t", j);
		}
		printf("End of outer loop %d\n", i);
	}
	return (0);
}
