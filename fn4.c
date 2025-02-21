// Checking prime no using fn

#include<stdio.h>
int isprime(int num);
int main()
{
	int n,c;
	printf("Enter a number \n");
	scanf("%d",&n);
	int isprime(num)
	{
		int i;
		for (i=2;i<num;i++)
		{
			if (num%i==0)
			return 0;
			else
			return 1;
		}
	}
	c=isprime(n);
	if (c==1)
	printf("THe numbers is prime");
	else 
	printf("The number is a composite");
	return 0;
}
