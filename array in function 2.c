#include <stdio.h>
void printArray(int arr[], int size)
 {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int temperatures[] = {25, 28, 24, 27, 26};
    int size = sizeof(temperatures) / sizeof(temperatures[0]);

    printf("Original Temperatures: ");
    printArray(temperatures, size);

    for (int i = 0; i < size; i++)
        {
        temperatures[i] = (temperatures[i] * 9 / 5) + 32;

    printf("Modified Temperatures (Fahrenheit): ");
    printArray(temperatures, size);

    return 0;
}
