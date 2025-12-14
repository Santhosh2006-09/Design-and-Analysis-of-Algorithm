//Write a C program that implements Bucket Sort to sort an array of floating-point numbers
#include <stdio.h>
#include <stdlib.h>
void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void bucketSort(float arr[], int n) {
    float buckets[n][n];
    int bucketCount[n];
    for (int i = 0; i < n; i++) {
        bucketCount[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int bucketIndex = arr[i] * n; 
        buckets[bucketIndex][bucketCount[bucketIndex]] = arr[i];
        bucketCount[bucketIndex]++;
    }
    for (int i = 0; i < n; i++) {
        if (bucketCount[i] > 0) {
            insertionSort(buckets[i], bucketCount[i]);
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < bucketCount[i]; j++) {
            arr[index++] = buckets[i][j];
        }
    }
}
int main() {
    int n;
    printf("CH.SC.U4CSE24142 - SANTHOSH A\n");
    printf("Enter number of floating-point values: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d numbers (between 0 and 1):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    bucketSort(arr, n);
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%0.2f ", arr[i]);
    }
    printf("\n");
    return 0;
}