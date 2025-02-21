#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number \n");
	scanf("%d",&n);// Number is entered whose factor is to be found
	for (i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("The factoris of %d is %d\n",n,i);
		}
	}
	return 0;
}
