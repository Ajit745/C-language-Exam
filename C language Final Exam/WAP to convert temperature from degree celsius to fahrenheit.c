#include<stdio.h>
//WAP to convert temperature from degree celsius to fahrenheit
int main()
{
	float cel,fah;
	printf("Enter Temperature In Celsius :");
	scanf("%f",&cel);
	
	fah=((cel*9)/5)+32;
	
	printf("\n\nThe Temperature in Fahrenheit After Conversion From Celsius is %.2f.",fah);
	return 0;
}
