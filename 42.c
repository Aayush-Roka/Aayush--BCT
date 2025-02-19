#include<stdio.h>
int hcf(int,int);
int main()
{
	int a,b,h;
	printf("Enter any two number:\n");
	scanf("%d\n%d",&a,&b);
	h=hcf(a,b);
	printf("Hcf of %d and %d=%d",a,b,h);
	return 0;
}
int hcf(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return hcf(b,a%b);
	}
}