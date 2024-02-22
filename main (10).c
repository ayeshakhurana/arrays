//write a code to print all the multiples of 3 present in the upper triangular matrix
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Multiples of 3 in the upper triangular matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = i; j < c; j++) {
            if (matrix[i][j] % 3 == 0) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
