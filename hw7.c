#include <stdio.h>
#include <math.h>

int main(void)
{
	double arr1[5], arr2[5];
	double Sum1 = 0, Sum2 = 0;
	double standardDeviation;
	
	printf("Enter 5 real number: ");
	scanf_s("%lf %lf %lf %lf %lf", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);

	for (int i = 0; i < 5; i++)
	{
		Sum1 += arr1[i];

		if (i == 4)
		{
			for (int j = 0; j < 5; j++)
			{
				arr2[j] = arr1[j] - (Sum1 / 5);
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		Sum2 += pow(arr2[i],2);
	}

	standardDeviation = sqrt(Sum2 / 5);
	printf("Standard Deviation %.3lf", standardDeviation);

	return 0;
}