#include<stdio.h>
int main()
{
	float a,b,s,average;
	printf("Enter any two number:\n");
	scanf("%f%f",&a,&b);
	s=a+b;
	average=(a+b)/2;
	printf("Sum of two number=%d\n",s);
	printf("Average of two number=%d",average);
	return 0;
}