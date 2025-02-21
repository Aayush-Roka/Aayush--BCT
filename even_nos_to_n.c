#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
	    	continue;
		printf("\t%d",i);
	}
	getch();
	return 0;
}
