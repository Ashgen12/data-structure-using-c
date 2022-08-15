#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
{
     int mid = l + (r - l)/2;
     // If the element is present at the middle itself
     if (arr[mid] == x)
       return mid;
     
     if (arr[mid] < x)
       l = mid +1;
     else 
       r = mid - 1;
}
    // We reach here when element is not present in array
    return -1;
}
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
	int x ;
        printf("\nElement to be searched is :\n");
        scanf("%d", &x);
	int result = binarySearch(arr, 0, n-1, x);  
	(result == -1)? printf("Element is not present in array")
	: printf("Element is present at index %d", result);
	return 0;
}