#include <stdio.h>
int main (){int i=0,s=1,v=0;
	char a[100];
	printf (" enter the string");
	scanf ("%[^\n]s",&a);
	
	
	while (a[i]!= '\0'){
	
		if (a[i]==' '){
			s=s+1;
		}
		if (a[i]>='a' && a[i]<='z'){
			v=v+1;
		}
		i=i+1;
}
		printf (" no of word %d no of character %d",s,v);
}
