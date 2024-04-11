#include <stdio.h>

int globalVar1 = 10;

int main()
 {
    globalVar1 = globalVar2;
    int globalVar2 = 20;

    printf("Value of globalVar1: %d\n", globalVar1);
    printf("Value of globalVar2: %d\n", globalVar2);

    return 0;
}
