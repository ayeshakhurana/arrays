//write a code to input a matrix and print sm of all indivisual rows and columns
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

    printf("Sum of individual rows:\n");
    for (int i = 0; i < r; i++) {
        int row_sum = 0;
        for (int j = 0; j < c; j++) {
            row_sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, row_sum);
    }

    printf("Sum of individual columns:\n");
    for (int j = 0; j < c; j++) {
        int col_sum = 0;
        for (int i = 0; i < r; i++) {
            col_sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, col_sum);
    }

    return 0;
}
