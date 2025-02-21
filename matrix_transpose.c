/*
7. WAP to find transpose of a 3*3 matrix
*/

#include<stdio.h>
int main()
{
	int mat1[3][3], mat2[3][3], i, j;
	
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
	
	printf("transpose of matrix 1: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", mat1[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
