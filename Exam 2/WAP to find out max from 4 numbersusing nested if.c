#include<stdio.h>

//WAP to find out max from 4 numbersusing nested if

int main()
{
	int a,b,c,d;
	
	printf("Enter Number One :");
	scanf("%d",&a);
	printf("Enter Number Two :");
	scanf("%d",&b);
	printf("Enter Number Three :");
	scanf("%d",&c);
	printf("Enter Number Four :");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
}
