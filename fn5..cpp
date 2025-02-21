// x ko power n using fucntion

#include<stdio.h>
int power(int , int );
int main ()
{
	int x,y,n;
	printf("Enter the term and power to be raised\n");
	scanf("%d%d",&x,&n);
	y=power(x,n);
	printf("The %d power raised to %d is %d",x,n,y);
	return 0;
}
int power(int x,int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	result*=x;
	return result;
}
