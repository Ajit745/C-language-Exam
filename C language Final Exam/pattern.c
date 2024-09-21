#include<stdio.h>
//75 76 77 78 79
//76 77 78 79
//77 78 79
//78 79
//79
int main()
{
	int i,j;
	for(i=75; i<=79; i++)
	{
		for(j=i; j<=79; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
