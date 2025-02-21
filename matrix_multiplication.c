/*
6. Write a program to multiply two 3*3 matrix
*/

#include<stdio.h>
int main()
{
	int mat1[3][3], mat2[3][3], r_mat[3][3], sum=0, i, j, k;
	
	printf("for matrix 1: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("mat1[%d][%d]: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
			printf("\n");
		}
	}
	
	printf("for matrix 2: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("mat2[%d][%d]: ", i+1, j+1);
			scanf("%d", &mat2[i][j]);
			printf("\n");
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			r_mat[i][j]=0;
			for(k=0; k<3; k++)
			{
				r_mat[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	
	printf("\nmultiply of two matrices:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", r_mat[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
