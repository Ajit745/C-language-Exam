#include<stdio.h>

//WAP that prints the perimeter of the rectangle to take its height and width as input

int main()
{
	int h,w,final;
	printf("Enter The Height Of The Rectangle :");
	scanf("%d",&h);
	
	printf("Enter The Width Of The Rectangle :");
	scanf("%d",&w);
	
	final = (h+w)+(h+w);
	
	printf("\nPerimeter Of The Rectangle Is %d.",final);
}
