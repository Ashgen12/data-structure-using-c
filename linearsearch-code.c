#include <stdio.h>

int linearSearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int n;
	printf("Enter number of elements\n");
    	scanf("%d", &n);
    	int arr[n];
    	printf("Enter %d integers\n", n);
    	for (int i= 0; i < n; i++)
    	{
        	scanf("%d", &arr[i]);
    	}
	
        printf("The elements of the array are - ");  
        for (int i = 0; i < n; i++)  
        printf("%d ", arr[i]); 
        int x ;
        printf("\nElement to be searched is :\n");
        scanf("%d", &x);
	int result = linearSearch(arr, n, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
