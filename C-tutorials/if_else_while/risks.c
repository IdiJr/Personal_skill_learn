#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter your age:\n");
	scanf("%d", &age);
	if (age > 18)
	       printf("You are welcome to take risks\nHave fun :)\n");
	else if (age > 0 && age < 18)
		printf("You are not eligible :/\nTry again when you are 18\n");
	else if (age < 0)
		printf("Sorry, that can't be right\n");
	else
		printf("Sorry, we didn't get your details");
	return (0);
}
