#include "sort_common.hpp"

int partition(int start, int end)
{
	int piv = arr[end];
	int small = start-1;

	for(int i=start;i<end;i++)
	{
		if(arr[i] < piv)
		{
			small++;
			swap(&arr[small], &arr[i]);
		}
	}
	small++;
	swap(&arr[small], &arr[end]);
	return small;

}

void quickUtil(int start, int end)
{
	if(start<end)
	{
		int pi = partition(start, end);
		quickUtil(start, pi-1);
		quickUtil(pi+1, end);	
	}
}

void quickSort(int start, int end)
{
	quickUtil(start, end);
	printArr();
}

int main()
{
	fillArray();
	quickSort(0, MAX_SIZE-1);
	return 0;
}