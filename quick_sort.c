 #include <stdio.h>
 #include<stdlib.h>

void swap(int* a, int* b)
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

 
int partition(int arr[], int low, int high) 
{ 

	 
	int pivot = arr[low]; 
	int i = low; 
	int j = high; 

	while (i < j) { 

		 
		while (arr[i] <= pivot && i <= high - 1) { 
			i++; 
		} 

		
		while (arr[j] > pivot && j >= low + 1) { 
			j--; 
		} 
		if (i < j) { 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[low], &arr[j]); 
	return j; 
} 

 
void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) { 

		 
		int partitionIndex = partition(arr, low, high); 
 
		quickSort(arr, low, partitionIndex - 1); 
		quickSort(arr, partitionIndex + 1, high); 
	} 
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
       scanf("%d", &array[i]);
    }
	 
	printf("Original array: "); 
	for (int i = 0; i < size; i++) { 
		printf("%d ", array[i]); 
	} 

	 
	quickSort(array, 0, size - 1); 

	
	printf("\nSorted array: "); 
	for (int i = 0; i < size ; i++) { 
		printf("%d ", array[i]); 
	} 

	return 0; 
}


// Explanation
/*Select a Pivot:
Choose the first element of the array as the pivot.
Partitioning:
Initialize two pointers, i and j, where i points to the start of the array (low) and j points to the end of the array (high).
Move i forward until you find an element greater than the pivot.
Move j backward until you find an element smaller than the pivot.
Swap the elements at i and j if i is still less than j.
Repeat steps 2 and 3 until j crosses i.
Finally, swap the pivot element with the element at index j.
Recursion:
Recursively apply Quick Sort to the left subarray (from low to partitionIndex - 1).
Recursively apply Quick Sort to the right subarray (from partitionIndex + 1 to high).
Continue this process while low is less than high.
Combine Sorted Subarrays:
Once all subarrays are sorted, the entire array will be sorted*/
