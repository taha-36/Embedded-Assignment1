#include "stats.h"
#include "stdio.h"
void print_stats(int * arr, int size)
{
	sort_array(arr, size);
	printf("Minimum:%d\n", find_min(arr, size));
	printf("Maximum:%d\n", find_max(arr, size));
	printf("Mean:%d\n", find_mean(arr, size));
	printf("Median:%d\n", find_median(arr, size));

}
void print_array(int * arr, int size)
{
	while(size--)
	{
		printf("%d \n", *(arr++));
	}
}
int find_median(int * arr, int size)
{
	int median;
	if(size % 2)
	{
		median = (*(arr + size/2 - 1) + *(arr + size/2)) / 2;
	}
	else
	{
		median = *(arr + size / 2);
	}
	return median;
}
int find_mean(int * arr, int size)
{
	int sum = 0;
	int mean;
	for(int i = 0; i < size ; i++)
	{
		sum += *(arr + i);
	}
	mean = sum / size;

	return mean;
}
int find_max(int * arr, int size)
{
	int max = *arr;
	for(int i = 0; i < size; i++)
	{
		if(*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}

	return max;
}
int find_min(int * arr, int size)
{
	int min = *arr;
	for(int i = 0; i < size; i++)
	{
		if(*(arr + i) < min)
		{
			min = *(arr + i);
		}
	}

	return min;
}
void sort_array(int * arr, int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for(int z = 0; z < size - 1 ;z++)
		{
			if(*(arr + z) > *(arr + z + 1))
			{
				int temp = *(arr + z + 1);
				*(arr + z + 1) = *(arr + z);
				*(arr + z) = temp;
			}
		}
	}
}
