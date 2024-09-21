#include<stdio.h>
//WAP to fint the wether the number even or not using udf
int test(n)
{
	if(n%2==0)
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n,x;
	printf("Enter n :");
	scanf("%d",&n);
	x=test(n);
	
	if(x==1)
	{
		printf("The Given Number is a Even Number");
	}
	else
	{
		printf("The Given Number is a Odd Number");
	}
	return 0;
}
