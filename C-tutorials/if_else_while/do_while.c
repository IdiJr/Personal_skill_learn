#include <stdio.h>

int main(void)
{
	int i = 1;

	{
		printf("Number %d\n", i);
		i++; /* don't forget to increment so that you don't create a perpetual loop */
	}
	while (i < 1);
	return (0);
}
