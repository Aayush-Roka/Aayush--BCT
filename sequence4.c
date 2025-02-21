#include<stdio.h>
#include<conio.h>
int main ()
{

	int i,n,a;
	printf("Enter a number ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		a=i*i*i;
		printf("%d \t",a);
	
	}
getch ();
return 0;

}
