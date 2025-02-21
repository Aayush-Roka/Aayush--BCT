#include<stdio.h>
int main()
{
	int r,s=0;
	long a;
	printf("Enter a higher digit number:");
	scanf("%ld",&a);
	do{
		r=a%10;
		s=s+r;
		a=a/10;
	
		
}while(a!=0);
	printf("The sum is %d",s);
	return 0;
}
