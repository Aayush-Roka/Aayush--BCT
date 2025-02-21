#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two integer values: ");
	scanf("%d%d",&num1,&num2);
	printf("\nValues before swap: %d\t%d",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nValues after swap: %d\t%d",num1,num2);
	return 0;
}
