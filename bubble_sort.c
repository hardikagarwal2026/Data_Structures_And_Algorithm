#include <stdio.h> 
#include<stdlib.h>
#include <math.h>

void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++)  
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) 
				swap(arr, j, j + 1); 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
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

	bubbleSort(array, size); 
	printf("Sorted array: "); 
	printArray(array, size); 
	return 0; 
}
