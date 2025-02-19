#include <stdio.h>

void increaselement(int m, int n, int matrix[m][n]);

int main()
{
    int m, n;
    printf("Enter order of matrix m x n:\n");
    scanf("%d %d", &m, &n);
    
    int matrix[m][n];
    printf("Enter matrix of order %d*%d:\n", m, n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Your input matrix is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    increaselement(m, n, matrix);
    
    printf("Resultant matrix is:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void increaselement(int m, int n, int matrix[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrix[i][j] += 2;
        }
    }
}
