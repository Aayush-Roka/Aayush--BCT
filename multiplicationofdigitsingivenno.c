#include<stdio.h>
#include<conio.h>
int main()
{
	int n,s=1,i=1,r;
	printf("Enter a number ");
	scanf("%d",&n);
	while (n!=0)
	{
		r=n%10;
		s=s*r;
		n=n/10;
		i++;
	}
	printf("The sum of digits of given number is  %d",s);
	getch();
	return 0;
}
