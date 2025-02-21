// Determine the largest no using function

#include<stdio.h>

int greatest(int x,int y);
int main()
{
	int one,two,three,four,five,six; // This is for six nos
	int fg,sg,tg,fv,fifthg; //first greatest,second greatest and so on.
	printf("Enter any six  numbers \n");
	scanf("%d%d%d%d%d%d",&one,&two,&three,&four,&five,&six);
	 int greatest(int x, int y)
	{
		if (x>y)
		return x;
		else
		return y;
	}
	fg=greatest(one,two);
	sg=greatest(fg,three);
	tg=greatest(sg,four);
	fv=greatest(tg,five);
	fifthg=greatest(fv,six);
	printf("The greatest among six numbers is %d",fifthg);
	return 0;
}
