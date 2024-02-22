//write a code to input a matrix and print all the even numbers on the principle diagnol
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

    printf("Even numbers on the principal diagonal are:\n");
    for (int i = 0; i < r && i < c; i++) {
        if (matrix[i][i] % 2 == 0) {
            printf("%d ", matrix[i][i]);
        }
    }
    printf("\n");

    return 0;
}
