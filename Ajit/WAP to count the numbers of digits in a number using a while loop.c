#include<stdio.h>
#include<conio.h>
void main()
{
	//WAP to count the numbers of digits in a number using a while loop	
	int i=1,n;
	printf("Enter N :");
	scanf("%d",&n);
	
	while(n>10)
	{
		n=n/10;
		i++;
	}
	printf("The Number You Entered is %d Digit Number!!",i);
}
