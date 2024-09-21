#include<stdio.h>
//WAP to printf 1 to n no. uisng while loop
int main()
{

	int n,i=1;
	printf("Enter n :");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("Don't Enter Zero !!");
	
	}
	else
	{
		while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			i++;
		}else
		{
			i++;
		}
	}
	}
	
	return 0;
}
