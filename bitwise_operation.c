#include <stdio.h>

int main() {
    int a = 13, b = 25;

    printf("OUTPUT FOR AND OPERATION IS %d\n", a & b);

    printf("OUTPUT FOR OR OPERATION IS %d\n", a || b);

    printf("OUTPUT FOR NOT OPERATION IS %d\n", !b);

    printf("OUTPUT FOR XOR OPERATION IS %d\n", a ^ b);

    printf("OUTPUT FOR NOR OPERATION IS %d\n", !(a || b));

    return 0;
}
