#include<stdio.h>
//WAP to find minimum numbers from 4 numbers
int main()
{
	int a,b,c,d,i;
	start:
	printf("\nEnter a :");
	scanf("%d",&a);
	
	printf("\nEnter b :");
	scanf("%d",&b);
	
	printf("\nEnter c :");
	scanf("%d",&c);
	
	printf("\nEnter d :");
	scanf("%d",&d);
	
	if(a<b && a<c && a<d)
	{
		printf("\nA is minimum.");
	}
	
	else if(b<a && b<c && b<d)
	{
		printf("\nB is minimum.");
	}

	else if(c<a && c<b && c<d)
	{
		printf("\nC is minimum.");
	}
	
	else if(d<a && d<b && d<c)
	{
		printf("\nD is minimum.");
	}

	else if(a==b && a==c && a==d)
	{
		printf("\nAll The Values are equal");
	}
	
	printf("\nIf you want to continue enter 1 or 0 to exit :");
	scanf("%d",&i);
	
	if(i==1)
	{
		goto start;
	}
	else
	{
		printf("\nThe Program Has Been Terminated!!\n");
	}
	return 0;
}
