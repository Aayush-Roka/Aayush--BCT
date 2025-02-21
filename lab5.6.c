//a program to find the factorial of a given number 

#include<stdio.h>
int main()
{
	int n,fact=1,count=1,i;
	printf("Enter a number \n");
	scanf("%d",&n);
	 if (n < 0) {
        printf("Factorial of negative number does not exist\n");
    }
    else
  {
	for (i=1;i<=n;i++)
	{
		if (count<=n)
		{
		 fact=fact*count;
		 count=count+1;
		}
	    }
	printf("The factorial of %d is %d",n,fact);
      }
	return 0;
}
