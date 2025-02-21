#include<stdio.h>
int main()
{
	int i;
	printf("The even numbers from 1 to 50 are:\n");
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}

}
