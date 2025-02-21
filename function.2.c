// a fn with no arg and  no return value

#include<stdio.h>
void sum();
int main (){
	int a,b;
//printf("Enter any two numbers :\n");
//scanf("%d%d",&a,&b);
sum();
getch();
}
void sum() {
	int a,b;
	printf("Enter any two numbers :\n");
	scanf("%d%d",&a,&b);
	int sum;
	sum=a+b;
	printf("THe sum of two  numbers is %d",sum);
}
 /* While making a function with no arg and no return value we should keep on mind that 
 we are not returning any value to the main fn. Tei vara we feed all the things in the
 definition of the function.Peace out*/
