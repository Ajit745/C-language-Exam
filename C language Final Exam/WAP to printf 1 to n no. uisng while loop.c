#include<stdio.h>
//WAP to printf 1 to n no. uisng while loop
int main()
{

	int n,i=1;
	start:
	printf("\nEnter n :");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("Don't Enter Zero !!\nRenter The Value OF n");
		goto start;
	}
	else
	{
		while(i<=n)
		{
			if(i%2!=0)
			{
				printf("%d ",i);
				i++;
			}
			else
			{
				i++;
			}
		}
	}
	
	return 0;
}
