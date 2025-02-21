// To calculate greatest between n number

#include<stdio.h>
#include<conio.h>
int main ()
{
int i ,g=0,n,m[1000];
printf("Enter the nth number \n");
scanf("%d",&n);
printf("Enter %d number ",n);
for (i=0;i<n;i++)
{
	scanf("%d",&m[i]);
	if (g<m[i])
	{
		g=m[i];
	}
	}
	printf("The greatest number is %d ",g);
	return 0;	
}
