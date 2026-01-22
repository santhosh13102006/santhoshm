#include <stdio.h>

void leftRotate(int nums[], int n) {
    int first = nums[0];          

    for (int i = 0; i < n - 1; i++) {
        nums[i] = nums[i + 1];    
    }
      nums[n - 1] = first;        
}

int main() {
    int n;
   printf("enter number of elements in array:");
   scanf("%d",&n);
   int nums[n];
   printf("enter %d elements:\n",n);
   for(int i=0;i<n;i++){
   scanf("%d",&nums[i]);}

    leftRotate(nums, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}