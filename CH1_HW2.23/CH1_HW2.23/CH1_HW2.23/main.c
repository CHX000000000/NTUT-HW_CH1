#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main()
{
	int num[3];
	printf("Please enter three integers :");
	scanf_s("%d %d %d",&num[0],&num[1],&num[2]);
	bubble_sort(num,3);
	printf("\nThe largest integer is %d\n", num[2]);
	printf("The smallest integer is %d\n", num[0]);
	system("pause");
	return 0;
}