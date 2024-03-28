#include<stdio.h>

int main()
 {
    int numbers[] = {1, 2, 3, 4, 5};

    printf("Numbers in array using array indexing:\n");
    for(int i = 0; i < 5; i++)
     {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int *ptr = numbers;

    printf("Numbers using pointer:\n");
    for(int i = 0; i < 5; i++)
     {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
