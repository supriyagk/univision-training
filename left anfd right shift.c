#include <stdio.h>

int main() {
    int a = 13;

    // Right shift by 1
    int rightShifted = a >> 2;
    printf("After right shift by 2: %d\n", rightShifted);

    // Left shift by 1
    int leftShifted = a << 2;
    printf("After left shift by 2: %d\n", leftShifted);

    return 0;
}
