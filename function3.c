// a function with arg and no return value 

#include<stdio.h>
void multiply(int a,int b);
int main()
{
	int a,b;
	printf("Enter any two numbers \n");
	scanf("%d%d",&a,&b);
	multiply(a,b);
	return 0;
}
void multiply(a,b)
{
	int mult;
	mult=a*b;
	printf("The product of two entered numbers is %d",mult);
}

/* THis is a fn with arg and no return value. Yesma chai main function ma vako value
is fetched by the multiply fn because there is arg. But print chai main function ma 
garna painna because mero fn le value return gardena.*/
