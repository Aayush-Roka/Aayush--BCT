#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3][4]={{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}},i,j,k;
	for(i=0;i<2;i++)
	{
		printf("\n\nTable number %d",i);
		for(j=0;j<3;j++)
		{
			printf("\n Row number %d",j);
			for(k=0;k<4;k++)
			{
				printf("\t%d",a[i][j][k]);
			}
		}
	}
	getch();
	return 0;
	
	
}
