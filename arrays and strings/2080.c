#include <stdio.h>

int main() {
    int p, q;

    printf("Enter number of rows (p): ");
    scanf("%d", &p);

    printf("Enter number of columns (q): ");
    scanf("%d", &q);

    int matrix[p][q];

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find largest element in each row
    for(int i = 0; i < p; i++) {
        int max = matrix[i][0];  // assume first element is largest

        for(int j = 1; j < q; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }

        printf("Largest element in row %d = %d\n", i + 1, max);
    }

    return 0;
}