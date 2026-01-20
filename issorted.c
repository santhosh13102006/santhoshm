#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;   // Not sorted
        }
    }
    return 1;   // Sorted
}

int main() {
   int n;
   printf("enter number of elements in array:");
   scanf("%d",&n);
   int arr[n];
   printf("enter %d elements:\n",n);
   for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);}
    if (isSorted(arr, n))
        printf("Array is sorted\n");
    else
        printf("Array is not sorted\n");

    return 0;
}