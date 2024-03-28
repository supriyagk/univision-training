#include <stdio.h>
int main()
{
    // Declaring array of size 10
    int array[10];
    int sum = 0;

    // Prompt the user to input numbers into the array
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // Here Calculating the sum of array elements
    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }

    // Displaying the sum of array elements
    printf("Sum of all array elements: %d\n", sum);
    return 0;
}
