#include <stdio.h>

void numberAdd(int number1, int number2)
{
	int calculateSum = number1 + number2;

	printf("The Sum of %d and %d is %d\n", number1, number2, calculateSum);
}

int main(void)
{
	numberAdd(5, 4);

	return (0);
}
