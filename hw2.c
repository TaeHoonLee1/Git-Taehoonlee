#include <stdio.h>

int main(void)
{
	double dis;

	printf("Please enter kilometers: ");
	scanf_s("%f", &dis);
	printf("%.1f kilometers is equal to %.1f miles", dis, (dis / 1.609));
}