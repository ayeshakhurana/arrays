//write a code to check if a matrix is upper triangular or not
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

    int is_upper_triangular = 1;
    for (int i = 1; i < r; i++) {
        for (int j = 0; j < i && j < c; j++) {
            if (matrix[i][j] != 0) {
                is_upper_triangular = 0;
                break;
            }
        }
        if (!is_upper_triangular) {
            break;
        }
    }

    if (is_upper_triangular) {
        printf("The 
