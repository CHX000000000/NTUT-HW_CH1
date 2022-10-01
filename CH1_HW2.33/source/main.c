#include <stdio.h>
#include <stdlib.h>

int main()
{
	float data[5];
	printf("Car-Pool Savings Calculator\n");
	printf("Please enter your total miles driven per day :");
	scanf_s("%f", &data[0]);
	printf("Please enter your cost per gallon of gasoline :");
	scanf_s("%f", &data[1]);
	printf("Please enter your average miles per gallon :");
	scanf_s("%f", &data[2]);
	printf("Please enter your parking fees per day :");
	scanf_s("%f", &data[3]);
	printf("Please enter your cost tolls per day :");
	scanf_s("%f", &data[4]);
	printf("Your cost per day of driving to work is %.1f dollars.\n",data[0]/data[2]*data[1]+data[3]+data[4]);
	system("pause");
	return 0;
}