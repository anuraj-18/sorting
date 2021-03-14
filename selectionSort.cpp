#include "sort_common.hpp"

void selectionSort()
{
	for(int i=0;i<MAX_SIZE;i++)
	{
		int min = arr[i];
		int min_ind = i;
		for(int j = i;j<MAX_SIZE;j++)
		{
			if(min > arr[j])
			{
				min=arr[j];
				min_ind = j;
			}
		}
		swap(&arr[i], &arr[min_ind]);
	}
	printArr();
}

int main()
{
	fillArray();
	selectionSort();
	return 0;
}