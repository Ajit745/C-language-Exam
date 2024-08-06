#include<stdio.h>
#include<conio.h>
void main()
{
	//WAP to find minimum from a given 3 numbers uisng nested if else
	int a,b,c;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	if(a==b && b==c)
	{
		printf("All numbers are same");
	}
	else
	{
			if(a<b)//a is winner
		{
			if(a<c)//a is minimum
			{
				printf("a is minimun ");
			}
			else//c is minimum
			{
				printf("c is minimun ");
			}
		}
		else//b is winner
		{
			if(b<c)//b is minimum
			{
				printf("b is minimun ");
			}
			else//c is minimum
			{
				printf("c is minimun ");
			}
		}
	}
}
