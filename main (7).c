//write a code to input amatrix oforderrx c and print its largest element
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
    int largest = matrix[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    printf("The largest element of the matrix is: %d\n", largest);

    return 0;
}

