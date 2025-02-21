#include<stdio.h>
#include<conio.h>
int main()
{
	// To print the sum of n natural numbers using for loop
	int s=0,i,n;
	printf("Enter a number for its nth sum ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s=s+i;
	}
		printf("The sum is %d",s);
getch ();
return 0;

}
