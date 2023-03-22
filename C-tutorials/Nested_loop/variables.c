#include <stdio.h>
/* Global variable: it remains the same through the time the code is run and can be accessed inside any function*/
int g = 20;

int main(void)
{
	/* Local variable: the variable crated inside the function. It cannot be accessed outside of function */
	int a = 5;
	int b = 10;

	printf("The result is a = %d, b = %d, g = %d\n", a, b, g);

	return (0);
}
