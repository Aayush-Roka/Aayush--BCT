#include<stdio.h>
int x=5;
void function()
{
	static int a=0;
	register int b=2;
	extern int x;
	int c=3;
	a++;
	b++;
	c++;
	printf("Static Variable a:%d\n",a);
	printf("Register Variale b:%d\n",b);
	printf("Extern variable x:%d\n",x);
	printf("Local variable c:%d\n",c);
}
int main()
{
	for(int i=0;i<3;i++)
	{
		function();
		x=x+2;
	}
	printf("Final extern variable x in main %d\n",x);
	return 0;
}