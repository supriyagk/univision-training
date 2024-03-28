#include <stdio.h>
int main()
{
    // Declaring and initializing the array alpha
    int alpha[] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    //change the value of 5th element in array
    alpha[5]=35;
    // Output value of the fifth element of the array alpha
    printf("The value of the fifth element of the array alpha: %d\n", alpha[5]);
    return 0;
}
