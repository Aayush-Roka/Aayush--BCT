#include<stdio.h>
int main()
{
	int n,a=0,b=1;
	while(n<500)
	{
		printf("%d\t\t",n);
		n=a+b;
		a=b;
		b=n;
		
	}
	
}
