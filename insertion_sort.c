#include <math.h>
#include <stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int *array, size;
    printf("Enter no. of elements you want in an array\n");
    scanf("%d", &size);
    array = (int*)malloc(size * sizeof(int));
    printf("Enter %d elements of an array\n", size);
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&array[i]);
    }
   
	insertionSort(array, size);
    printf("Sorted Array:");
	printArray(array, size);

	return 0;
}
