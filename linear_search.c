#include <stdio.h>
#include<stdlib.h>

int linearSearch(int* arr, int size, int key)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}


int main()
{
    int *array, size, key;
    printf("Enter no. of elements you want in an array\n");
    scanf("%d", &size);
    array = (int*)malloc(size * sizeof(int));
    printf("Enter %d elements of an array\n", size);
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&array[i]);
    }
    printf("Enter Element you want to search\n");
    scanf("%d", &key);

	int index = linearSearch(array, size, key);

	if (index == -1) {
		printf("The element is not present in the array");
	}
	else {
	    printf("Element is present at index %d", index);
	}

	return 0;
}
