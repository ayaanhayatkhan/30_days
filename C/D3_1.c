#include <stdio.h>

int main() {
    int a = 5;
    printf("size of a is :%d\n",sizeof(a));
// 1 integer takes 4 bytes in memory

    int arr[] = {2, 4, 8, 12, 16, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The size of array is :%d\n",sizeof(arr));
// the value of n is 6 bec array size is 24 / one element size which is 4 

    printf("The value of n is :%d\n",n);

    // Printing array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}