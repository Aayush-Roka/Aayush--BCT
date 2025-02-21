#include<stdio.h>
#include<conio.h>
int main ()
{

	int i,n=0,g=1,d;
	printf("%d \t %d \t",n,g);
	for (i=1;i<=10;i+=1)
	{
		d=n+g;
		printf("%d \t",d);
	n=g;
	g=d;
	}
getch ();
return 0;

}
