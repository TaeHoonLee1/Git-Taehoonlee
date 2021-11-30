#include <stdio.h>

int main(void)
{
	char str[100];

	printf("Input: ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		else
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
			{
				str[i] = str[i] - 'A' + 'a';
			}
		}
	}

	printf("Output: %s", str);
	return 0;
}