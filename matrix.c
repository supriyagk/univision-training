#include <stdio.h>

//int sumOfMatrix(int m, int n, int *matrix)
int sum(int m, int n, int matrix1[m][n],int matrix2[m][n]) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j]+ matrix2[i][j];
        }
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n],matrix2[m][n];
    printf("Enter the elements of the matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

     printf("Enter the elements of the matrix 2:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }


    int result = sum(m, n, matrix1, matrix2, result);
    //int result = sumOfMatrix(m, n, (int *)matrix);
    printf("Sum of all elements in the matrix: %d\n", result);

    return 0;
}
