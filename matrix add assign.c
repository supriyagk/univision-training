#include <stdio.h>
int main()
{
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
    result[i][j] = array1[i][j] + array2[i][j];
    }
    }
    printf("Result Matrix (Matrix1 + Matrix2):\n");
    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
     {
    printf("%d\n", result[i][j]);
    }
    }
    return 0;
}
