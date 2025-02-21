//a program to generate fibonacci series until the term is less than 500

#include<stdio.h>
int main()
{
	int a=0,b=1,c,i;
	printf("%d\t%d\t",a,b);
	for (i=1;i<100;i++)
	{
		c=a+b;
		if (c>=500)
		{
			break;
		}
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
