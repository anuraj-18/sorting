#include "sort_common.hpp"

void insertSort()
{
	for(int i=1;i<MAX_SIZE;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j] < arr[j-1])
			{
				swap(&arr[j], &arr[j-1]);
			}
		}
	}
	printArr();
}

int main()
{
	fillArray();
	insertSort();
	return 0;
}