// To find factorial of nth given number
#include<stdio.h>
#include<conio.h>
int main()
{
		int p=1,i,n;
	printf("Enter a number for its factorial ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d \n",i);
		p=p*i;
	}
		printf("The factorial  is %d",p);
getch ();
return 0;
}
