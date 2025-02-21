#include <stdio.h>
int main (){int i=0,s=1,v=0;
	char a[100],b[100];
	printf (" enter the strings");
	scanf ("%s%s",&a,&b);
	
while (a[i]!= '\0'){
	b[i]=a[i];
	i=i+1;
}
printf (" the strings are now copied as %s and  %s",a,b);
return 0;
}
