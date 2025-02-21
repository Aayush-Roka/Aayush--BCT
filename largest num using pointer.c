#include <stdio.h>
int main (){
	int a,b,c ;
	int *p,*q,*r;
	
	printf (" enter the number",a,b,c);
	scanf ("%d%d%d",&a,&b,&c);
	
	
	p=&a;
	q=&b;
	r=&c;
	if (*p>*q && *p>*r){
		printf (" the largest number is %d",*p);
		
	}
	else if (*q>*p && *q>*r){
		printf (" the largest number is %d",*q);
		
	}
	else 
	printf (" the largest is %d",*r);
	
	
	return 0;
	
}
