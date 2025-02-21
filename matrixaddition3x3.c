#include <stdio.h>
// Matrix multiplication for 2x2 matrix
int main()
 {
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    printf("Matrix Addition for 3x3 matrices\n");

    // Input for first matrix
    printf("Enter the elements of the first matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix
    printf("\nEnter the elements of the second matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Addition of matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the result
    printf("\nThe resultant matrix after addition is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

