/*TO input marks obtained by n-students in comp sci and calculate 
avg marks of all also count the total numbers of stds who are fail 
considering 40 to be pass marks */


 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int mark[100],marks,n,i,sum=0,x=0;
 	float avg;
 	printf("Enter the total number of students \n");
 	scanf("%d",&n);
 	printf("Enter the marks of individual stds \n");
 	for (i=0;i<n;i++)
 	{
 		scanf("%2d",&mark[i]);
 		sum=sum+mark[i];
 		if (mark[i]<40)
 		{
 		x=x+1;	
		 }
	 }
 	avg=sum/n;
 	printf("The average is %.2f \n",avg);
 	printf("The total number of students who failed are %d ",x);
 	return 0;
 }
