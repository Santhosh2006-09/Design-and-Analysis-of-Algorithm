//CH.SC.U4CSE24142 - SANTHOSH A
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition_first(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[low], &arr[i - 1]);
    return i - 1;
}
void quicksort_first(int arr[], int low, int high) {
    if (low < high) {
        int p = partition_first(arr, low, high);
        quicksort_first(arr, low, p - 1);
        quicksort_first(arr, p + 1, high);
    }
}
int partition_last(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}
void quicksort_last(int arr[], int low, int high) {
    if (low < high) {
        int p = partition_last(arr, low, high);
        quicksort_last(arr, low, p - 1);
        quicksort_last(arr, p + 1, high);
    }
}
int partition_random(int arr[], int low, int high) {
    int r = low + rand() % (high - low + 1);
    swap(&arr[r], &arr[high]);
    return partition_last(arr, low, high);
}
void quicksort_random(int arr[], int low, int high) {
    if (low < high) {
        int p = partition_random(arr, low, high);
        quicksort_random(arr, low, p - 1);
        quicksort_random(arr, p + 1, high);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    printf("CH.SC.U4CSE24142 - SANTHOSH A\n");
    srand(time(NULL));
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i]; 
        arr3[i] = arr1[i];  
    }
    quicksort_first(arr1, 0, n - 1);
    printf("\nSorted using FIRST element as pivot:\n");
    printArray(arr1, n);
    quicksort_last(arr2, 0, n - 1);
    printf("\nSorted using LAST element as pivot:\n");
    printArray(arr2, n);
    quicksort_random(arr3, 0, n - 1);
    printf("\nSorted using RANDOM element as pivot:\n");
    printArray(arr3, n);
    return 0;
}