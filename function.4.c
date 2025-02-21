// A fn with no arg but return value

#include<stdio.h>
int divide()
{
	int a,b,div;
	printf("Enter any two numbers \n");
	scanf("%d%d",&a,&b);
	div=a/b;
	return div;
}
int main ()
{
	int X=divide();
	int div;
	printf("The division of two entered numbers is %d ",X);
	return 0;
}

/* so yesma chai function ma sab garne and it return  a value. Tyo value lai chai we should
Store in a variable in a main function. Ani tyo lai print hanne.
