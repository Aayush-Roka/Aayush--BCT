#include <stdio.h>
int main (){
	int a[5] ;
	int *p[5];
	int i,s=0;
	printf (" enter the 5 number");
	for (i=0;i<5;i++){
		
	

	scanf ("%d",&a[i]);
	p[i]=&a[i];
}

		for (i=0;i<5;i++){
		
s=s+**(p+i);
}
printf (" the sum is %d",s);
return 0;
}

	
	
