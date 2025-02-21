//a program to find HCF and LCM of two numbers

#include<stdio.h>
int main()
{
	int n1,n2,min,lcm,hcf,i;
	printf("Enter any two numbers \n");
	scanf("%d%d",&n1,&n2);
	min=(n1<n2)?n1:n2;
	for(i=1;i<=min;i++)
	{
		if (n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
	}
	lcm=(n1*n2)/hcf;
	printf("The HCF is %d and LCM is %d",hcf,lcm);
	return 0;
}
