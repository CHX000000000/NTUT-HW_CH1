#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int array[], int n)
{
	int temp,i,j;
	for (i=0;i<n;++i)
	{
		for (j=0;j<i;++j) 
		{
			if (array[j] > array[i]) 
			{
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}