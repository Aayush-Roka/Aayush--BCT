#include<stdio.h>
int main()
{
	int r,s=0,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("%d is reverse number",s);
	return 0;
}