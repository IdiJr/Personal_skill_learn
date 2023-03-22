#include <stdio.h>
#define ops 5

/* Mathematical operation functions */

float sum(float number1, float number2)
{
	return (number1 + number2);
}
float sub(float number1, float number2)
{
	return (number1 - number2);
}
float mul(float number1, float number2)
{
	return (number1 * number2);
}
float div(float number1, float number2)
{
	return (number1 / number2);
}

/* main function*/
int main(void)
{
	float (*ptr_func[ops]) (float, float) = {sum, sub, mul, div};
	int choice;
	float number1, number2;

	printf("Enter your choice: 0 for sum, 1 for sub, 2 for mul, 3 for div\n");
	scanf("%d", &choice);

	printf("Enter two numbers: \n");
	scanf("%f %f", &number1, &number2);

	printf("The result is: %f\n", ptr_func[choice] (number1, number2));

	return (0);
}
