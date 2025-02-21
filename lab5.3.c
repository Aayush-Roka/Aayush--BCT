/*To find the sum of all individual digits of the number.(using
do while loop */

#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf( "ENter a number \n");
	scanf("%d",&n);
	do 
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}while(n!=0);
	printf("The sum of individual digit is %d",s);
	return 0;
}
