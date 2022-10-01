#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
	printf("Please enter two integers :");
	scanf_s("%d%d", &num1, &num2);
	if (num1 % num2 == 0)
	{
		printf("\n%d is a multiple of %d\n", num1, num2);
	}
	else
	{
		printf("\n%d is not a multiple of %d\n", num1, num2);
	}
	system("pause");
	return 0;
}