#include<stdio.h>
#include<conio.h>
void main()
{
	//WAP to find the sum of all odd numbers between 1 to n.Using do while loop.
	int n,i=0,sum=0;
	printf("Enter N :");
	scanf("%d",&n);
	if(n>0)
	{
		do
		{
			i++;
			if(i%2==1)
			{
				printf("%d ",i);
				sum=sum+i;
			}
	
		}while(i<n);
	
		printf("Sum of all odd numbers from 1 to %d is %d",n,sum);
	}
	else
	{
		printf("Don't Enter Zero !!!");
	}
}
