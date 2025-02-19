// Reverse of a number using Recursion
#include<stdio.h>
int reverse(int);
int main()
{
	int num,rev;
	printf("Enter a number:\n");
	scanf("%d",&num);
	rev=reverse(num);
	printf("reverse of a %d is %d",num,rev);
	return 0;
}
int reverse(int num)
{
	static int s=0;
	int r;
	if(num==0)
	{
		return 0;
	}
	else
	{
		r=num%10;
		s=s*10+r;
		 reverse(num/10);
	}
	return s;
}
