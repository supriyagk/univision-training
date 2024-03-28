#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Assigning the base address of the array to the pointer

    for (int i = 0; i < 5; i++) {
        printf("Number in array at index %d is: %d\n", i, *(ptr + i));
    }

    return 0;
}
