#include <stdio.h>
int main (){int i=0,s=1,v=0,j=0;
	char a[100],b[100],c[100];
	printf (" enter the first  string:\t");
	scanf ("%s",&a);
		printf (" enter the second  string:\t");
	scanf ("%s",&b);
	
while (a[i]!= '\0'&& a[i]!= '\0'){
	if (a[i]>b[i]){
		printf (" the first stringis large "); 
		goto down ;
	}
	if (a[i]<b[i]){
		printf (" the second  stringis large ");
			goto down ;
	}
	if  (a[i]==b[i]){
	i=i+1;
	}
}
printf (" both string same ");
 down :
return 0;
}
