#include<stdio.h>

//WAP to print multiplication table using for loop

int main()
{
	int i,n;
	printf("Enter Any Number :");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
