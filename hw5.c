#include <stdio.h>

int main(void)
{
	int i, arr[5];

	printf("Enter the 5 integers: ");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("Odd number output: ");
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d,", arr[i]);
	}
	printf("\b \n");
	printf("Even number ountput: ");
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d,", arr[i]);
	}
	printf("\b \n");
	return 0;
}
