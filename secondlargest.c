#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n) 
{
    if (n < 2)
        return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) 
	{
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}

int main() 
{
    int arr[] = {34,25,23,21,456,89,543,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Second Largest element in array : %d\n", secondLargest(arr, n));
    return 0;
}