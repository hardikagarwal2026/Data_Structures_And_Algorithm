#include <stdio.h>
#include<stdlib.h>
void Sort(int arr[], int n)
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

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
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

    Sort(array, size);
    printf("The Sorted Array for Binary Search is:\n");
    for(int i=0; i<size ;i++){
        printf("%d\n",array[i]);
    }
	int index = binarySearch(array, 0, size - 1, key);
	(index == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", index);
	return 0;
}
