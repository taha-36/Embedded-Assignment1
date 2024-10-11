#include "stats.h"
#include "stdio.h"

int arr[] = {0,5,1,10,2,4,8,2,6,41,55,68};
int size = sizeof(arr) / sizeof(arr[0]);
void main()
{
	print_stats(arr,size);
}
