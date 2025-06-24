#include <stdio.h>

void modify(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 5;
    }
}

int main() {
    int arr[10];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    modify(arr, 10);

    printf("Modified array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
