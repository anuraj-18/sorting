#include<iostream>

using namespace std;

#define MAX_SIZE 10

int arr[MAX_SIZE];

int random(int n) // not latger than n
{
	int *x, p;
	x = (int*)malloc(sizeof(int));
	p = (int)x;
	return p%n;
}

void swap(int *a, int *b)
{
	int t = *a;
	*a=*b;
	*b=t;
}

void printArr()
{
	for(int i=0;i<MAX_SIZE;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void fillArray()
{
	for(int i=0;i<MAX_SIZE;i++)
	{
		arr[i] = random(100 + i);
		cout << arr[i] << " ";
	}
	cout << endl;
}