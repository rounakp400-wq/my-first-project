#include <stdio.h>

void mergeArrays(int arr1[], int size1,  int arr2[], int size2, int merged[]) {
    int i, j;
    // Copy elements of first array
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    // Copy elements of second array, starting after the first array's elements
    for (j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }
}

int main() {
    int size1, size2;

    // Get input for the first array
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &size1);
    int arr1[size1]; // Variable Length Array (C99 feature)
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Get input for the second array
    printf("\nEnter the number of elements for the second array: ");
    scanf("%d", &size2);
    int arr2[size2]; // Variable Length Array
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Calculate total size and declare the merged array
    int mergedSize = size1 + size2;
    int merged[mergedSize]; // Variable Length Array

    // Merge the arrays
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Display the merged array
    printf("\nMerged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    int arr[100], n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found");
    }

    return 0;
}