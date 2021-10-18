#include <stdio.h>
int ShareAndRemainder(int num);

int main(void)
{
	int num;

	printf("Please enter the number: ");
	scanf_s("%d", &num);
	ShareAndRemainder(num);
}
int ShareAndRemainder(int num)
{
	if (num == 0 || num == 1)
		printf("%d", num);
	else
	{
		ShareAndRemainder(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}