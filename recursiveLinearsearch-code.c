#include<stdio.h>
int linearsearch(int arr[], int size, int key)
{
    if (size == 0) {
        return -1;
    }
    if (arr[size - 1] == key) {
        // Return the index of found key.
        return size - 1;
    }
    else {
        int ans = linearsearch(arr, size - 1, key);
        return ans;
    }
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
   
    // Function call
    int ans = linearsearch(arr, n, x);
    (ans == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", ans);
    return 0;
}