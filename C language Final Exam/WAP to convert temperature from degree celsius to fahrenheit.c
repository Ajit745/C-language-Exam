#include<stdio.h>
//WAP to convert temperature from degree celsius to fahrenheit
int main()
{
	int i;
	
	float celsius,fahrenheit;
	start:
	printf("\nEnter Temperature In Celsius :");
	scanf("%f",&celsius);
	
	fahrenheit=((celsius*9)/5)+32;
	
	printf("\n\nThe Temperature in Fahrenheit After Conversion From Celsius is %.2f.",fahrenheit);
	
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
