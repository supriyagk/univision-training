#include <stdio.h>

int main() {
    int number = 7;  // Binary: 0101
    int position = 2; // Position to toggle

    // Toggle the bit at the specified position
    number ^= (1 << position);

    printf("Original value is:%d\n", number);  // Output: 7 (Binary: 0111)

    return 0;
}
