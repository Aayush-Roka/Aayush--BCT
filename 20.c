#include<stdio.h>
int main()
{
	int a,b,c,d,hcf,temp;
	printf("Enter any two number:\n");
	scanf("%d%d",&c,&d);
	a=c;
	b=d;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	hcf=a;
	printf("HCF of %d and %d=%d",c,d,hcf);
	return 0;
}