//Write a C program that reads N integers from the user and sorts them in ascending order using Bubble Sort.4
// CH.SC.U4CSE24142 - SANTHOSH A
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    printf("CH.SC.U4CSE24142 - SANTHOSH A\n");
    int num, i;
    printf("Enter the number of integers: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d integers:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, num);
    printf("Sorted integers in ascending order:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }   
    return 0;
}