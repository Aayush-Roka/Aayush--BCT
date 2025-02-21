#include<stdio.h>
int findsum(int n)
{
	if(n/10==0)
	{
		return n;
	}
	
	else
	{
		return (n%10)+findsum(n/10);
	}
}

int main()
{
	int n;
	int sum;
	printf("Enter a five digit number: ");
	scanf("%d",&n);
	sum=findsum(n);
	
	printf("Sum=%d",sum);
}
