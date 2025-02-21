#include <stdio.h>
#include <string.h>

int main (){int i=0,j=0;
	char a[100]={"UNIVERSITY"};

	for (i=0;i<6;i++){
for (j=0;j<i+i;j=j+2){
	printf ("%c%c",a[j],a[j+1]);
		
	}
	printf ("\n");
	}
	for (i=4;i>0;i--){
for (j=0;j<i+i;j=j+2){
	printf ("%c%c",a[j],a[j+1]);
		
	}
	printf ("\n");
	}
	return 0;
	}

