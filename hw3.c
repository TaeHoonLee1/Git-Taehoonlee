#include <stdio.h>

int main(void)
{
	int number;

	printf("Please enter a number: ");
	scanf_s("%d", &number);

	for (int i = number - 1; i > 1; i--)
	{
		if (number % i == 0)
		{
			printf("it is not a prime number");
			break;
		}
		else if (i == 2)
		{
			if (number % i != 0)
			{
				printf("it is a prime number");
			}
		}
	}
}