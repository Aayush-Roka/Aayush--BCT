#include<stdio.h>
int main()
{
	int a,b,c,d,hcf,lcm,temp;
	printf("enter any two numbers:");
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	while(d!=0)
	{
		temp=d;
		d=c%d;
		c=temp;
	}

hcf=c;
lcm=(a*b)/hcf;
printf("hcf =%d",hcf);
printf("\nlcm=%d",lcm);
return 0;
}

