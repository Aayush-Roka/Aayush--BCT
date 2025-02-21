#include<stdio.h>
#include<math.h>
int main()
{
	
	int n=10, y=1, i, j, fact=1;
	for(i=1; i<=10; i++)
	{
		if(i==1||i==4||i==6||i==8||i==9||i==10)
		{
			for(j=1; j<=i; j++)
			{
				fact=fact*j;
			}
			y=y+((i*i)/fact);
		}
	}
	
	printf("%d\n", y);
	return 0;
}
