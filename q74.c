// C program to merge two arrays into a new array
#include <stdio.h>
#include <stdlib.h>
int* mergeArrays(int arr1[], int n1, int arr2[],int n2) {
      int *res = (int *)malloc((n1 + n2) * sizeof(int));
    for (int i = 0; i < n1; i++)
        res[i] = arr1[i];
    for (int i = 0; i < n2; i++)
        res[n1 + i] = arr2[i];
      return res;
}

int main() {
    int arr1[] = {1, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int *res = mergeArrays(arr1, n1, arr2, n2);
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", res[i]);

    return 0;
}
