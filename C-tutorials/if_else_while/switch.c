#include <stdio.h>
int main(void)
{
	char grade;

	printf("Please enter your grade to see remark\n");
	scanf("%c", &grade);

		switch(grade)
		{
	case 'A':
			printf("Excellent\n");
			break;
	case 'B':
			printf("Great\n");
			break;
	case 'C':
			printf("Good\n");
			break;
	default:
			printf("No remark\n");
		}
			return (0);
}
