#include "sort_common.hpp"

int L[MAX_SIZE], R[MAX_SIZE];

void merge(int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    int i = 0;
 
    int j = 0;

    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int l, int r)
{
	if(l >= r){
        return;
    }
    int m = l + (r-l)/2;
    mergeSort(l, m);
    mergeSort(m + 1, r);
    merge(l, m, r);
}

int main()
{
	fillArray();
	mergeSort(0, MAX_SIZE-1);
	printArr();
	return 0;
}