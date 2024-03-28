#include <stdio.h>
int main()
{
    // Declaring and initializing an 1-D  array
    int array[] = {10, 02, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    //the original array is
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Reverse the array
    for (int i = 0; i < size / 2; i++)
    {
        // Swapping elements at positions i and (size - i - 1)
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }

    // Display the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
