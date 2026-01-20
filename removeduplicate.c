#include <stdio.h>

int removeduplicates(int nums[], int n) {
    if (n == 0)
        return 0;

    int k = 1;  // index for unique elements

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;  // number of unique elements
}

int main() {
   int n;
   printf("enter number of elements in array:");
   scanf("%d",&n);
   int nums[n];
   printf("enter %d elements:\n",n);
   for(int i=0;i<n;i++){
   scanf("%d",&nums[i]);}

    int k = removeduplicates(nums, n);

    printf("elements without duplicate:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;

}
