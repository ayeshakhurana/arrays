//write a code to print sum of all th elements present at the secondary diagnol
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

    int sum = 0;
    for (int i = 0; i < r && i < c; i++) {
        sum += matrix[i][c - i - 1];
    }

    printf("Sum of elements on the secondary diagonal: %d\n", sum);

    return 0;
}
