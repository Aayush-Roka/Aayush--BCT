// Using recursion fn to find the factorial

#include<stdio.h>
int fact(n)
{
	if (n<=1)
	{
		return(1);
	}
	else 
	{
		return (n*fact(n-1));// Yesle chai auta certain value return garxa unless n==1
	}
}
	int main()
	{
	int n,x;
	printf("Enter a number: \n");
	scanf("%d",&n);
//	x=fact(n);
    printf("The factorial of entered number is %d",fact(n));
    return 0;
}
