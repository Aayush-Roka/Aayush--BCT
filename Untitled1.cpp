#include<stdio.h>
void fibo(int n);
int main()
{
	int n,fibonacci;
	printf("Enter no of term you want:\n");
	scanf("%d",&n);
if(n>=2)
{
	fibo(n);
}
return 0;
}
void fibo(int n)
{
	int a=0,b=1,c,i;
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
