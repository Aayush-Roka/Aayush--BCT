// A function with arg and return value

#include<stdio.h>
int sum(int X, int Y)
{
	int sum=X+Y;
	return sum;
}
int main()
{
	int a,b,add;
	printf("Enter any two numbers :");
	scanf("%d%d",&a,&b);
	add=sum(a,b);
	printf("THe sum is %d",add);
	return 0;
}

/* So yesma chai maile arg pass garexu and a,b ko value chai maile banako fn ma as X and Y
bhayera janxa and execute hunxa tyo func ani telle sum return garxa jun chai mero main 
fn ma add vanni ma store hunxa. As simple as that*/
