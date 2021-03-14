#include "sort_common.hpp"

void bubbleSort()
{
	if(MAX_SIZE == 1)
	{
		printArr();
	}
	for(int i = 0;i<MAX_SIZE-1;i++)
	{
		for(int j=0;j<MAX_SIZE-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
	printArr();
}

int main()
{
	fillArray();
	bubbleSort();
	return 0;
}