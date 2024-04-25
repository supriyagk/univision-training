#include <stdio.h>

void elem(int arr[], int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    printf("Sum of all elements: %d\n", sum);
    printf("Elements in array: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    elem(arr, size);
    return 0;
}

