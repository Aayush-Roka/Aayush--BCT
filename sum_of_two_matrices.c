/*
5. Write a program to read two matrices of order 3 * 2, add them and 
display the resultant matrix in matrix form.
*/

#include<stdio.h>
int main()
{
	int mat1[3][2], mat2[3][2], s_mat[3][2], i, j;
	printf("for matrix 1:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("mat1[%d][%d]: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
			printf("\n");
		}
	}
	
	printf("for matrix 2:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("mat2[%d][%d]: ", i+1, j+1);
			scanf("%d", &mat2[i][j]);
			printf("\n");
		}
	}
	
	printf("sum of matrices:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			s_mat[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", s_mat[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
