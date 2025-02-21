#include<stdio.h>
#include<conio.h>
int main ()
{
	int i=1,n,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	while (i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d ",sum);
	getch ();
	return 0;
}
