#include<stdio.h>
//WAP to find minimum numbers from 4 numbers
int main()
{
	int a,b,c,d;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	
	if(a<b && a<c && a<d)
	{
		printf("A is minimum.");
	}
	else if(b<a && b<c && b<d)
	{
		printf("B is minimum.");
	}
	else if(c<a && c<b && c<d)
	{
		printf("C is minimum.");
	}
	else if(d<a && d<b && d<c)
	{
		printf("D is minimum.");
	}
	else if(a==b && a==c && a==d)
	{
		printf("All The Values are equal");
	}
	
	return 0;
}
