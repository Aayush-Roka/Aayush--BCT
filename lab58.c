#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y=0,n;
	printf("the series to be calculated:\n x+x^2+x^3+....+x^n");
	printf("Enter the value of x and n:");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
	 y+=pow(x,i);
		
	}
	printf("%d",y);
	return 0;
}
