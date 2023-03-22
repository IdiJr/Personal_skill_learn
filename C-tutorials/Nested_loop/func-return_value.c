#include <stdio.h>

int numberAdd(int number1, int number2)
{
	int calculateSum = number1 + number2;

	return calculateSum;
}

int main(void)
{
	int result = numberAdd(5, 4);
	printf("The result is %d\n", result);

	return (0);
}
