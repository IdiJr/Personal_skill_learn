#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 20)
	{
		printf("Number %d\n", i);
		i++; /* don't forget to increment so that you don't create a perpetual loop */
	}
	return (0);
}
