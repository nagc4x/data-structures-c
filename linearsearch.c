#include <stdio.h>

int main() {
    int size, i, key, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at position: %d (Index: %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
