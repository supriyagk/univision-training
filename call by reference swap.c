#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;
    printf("Before swap:\n");
    printf("a is %d, b is %d\n", a, b);
    swap(&a, &b);
    printf("After swap:\n");
    printf("a is %d, b is %d\n", a, b);
    return 0;
}
