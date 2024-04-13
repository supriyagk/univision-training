#include <stdio.h>

int main() {
    int number = 5;  // Binary: 0101
    int position = 1;       // Position to set to 1

    number |= (1 << position);  // Set the bit at position 2 to 1

    printf("Original value is:%d\n", number);  // Output: 6 (Binary: 0110)

    return 0;
}
