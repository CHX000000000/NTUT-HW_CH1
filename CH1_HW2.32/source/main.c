#include <stdio.h>
#include <stdlib.h>

int main()
{
	float weight, higher, BMI;
	printf("Body Mass Index Calculatar\n");
	printf("Please enter your weight(kilograms) :");
	scanf_s("%f", &weight);
	printf("Please enter your higher(meter) :");
	scanf_s("%f", &higher);
	BMI = weight / (higher * higher);
	printf("\nYour BMI is %.1f.\n", BMI);
	if (BMI < 18.5)
	{
		printf("Your BMI value is underweght.\n");
	}
	else if (BMI < 25)
	{
		printf("Your BMI value is normal.\n");
	}
	else if (BMI < 30)
	{
		printf("Your BMI value is overweght.\n");
	}
	else
	{
		printf("Your BMI value is obese.\n");
	}
	system("pause");
	return 0;
}