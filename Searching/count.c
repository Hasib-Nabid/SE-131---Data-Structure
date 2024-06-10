#include <stdio.h>

int main() {
    int size, target, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    if (count > 0) {
        printf("Element %d is present %d times.\n", target, count);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
