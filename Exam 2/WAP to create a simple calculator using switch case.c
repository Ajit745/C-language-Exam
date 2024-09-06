#include<stdio.h>

//WAP to create a simple calculator using switch case

int main()
{
	int num1,num2;
	int choice;
	
	restart:
	
	printf("\nPress 1 For +\n");
	printf("Press 2 For -\n");
	printf("Press 3 For *\n");
	printf("Press 4 For /\n");
	printf("Press 5 For %%\n");
	printf("Press 0 To End\n");
	
	
	printf("Enter Your Choice :");
	scanf("%d",&choice);
	
 	if(choice==0)
 	{
		goto end;
	}
		
	
	
	printf("\nEnter First Number :");
	scanf("%d",&num1);
	
	printf("\nEnter Second Number :");
	scanf("%d",&num2);
	
	switch(choice)
	{
		case  1 :printf("\nSum Of %d and %d is %d.\n",num1,num2,num1+num2);
		break;
		
		case  2 :printf("\nSubtraction Of %d and %d is %d.\n",num1,num2,num1-num2);
		break;
		
		case  3 :printf("\nMultiplication Of %d and %d is %d.\n",num1,num2,num1*num2);
		break;
	
		case  4 :printf("\nDivision Of %d and %d is %d.\n",num1,num2,num1/num2);
		break;
		
		case  5 :printf("\nModule Of %d and %d is %d.\n",num1,num2,num1%num2);
		break;
		
		default : printf("Enter Valid Input !!");
		
	}
	goto restart;
	end:
	printf("\nThe Program Has Been Ended !!\n")	;
}
