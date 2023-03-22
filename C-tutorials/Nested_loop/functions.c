#include <stdio.h>

void greeting()
{
	printf("Hello, my friend\n");
}

int main(void)
{
	greeting();
	greeting();
	greeting();
	greeting();

	printf("All functions have been run\n"); /*This is to prove the function runs as intended*/
	return (0);
}
