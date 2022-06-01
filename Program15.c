//Program to display N times Hello on the Screen:

#include<stdio.h>

//Demonstration of Iteration

void Display(int iNo)				//Definition
{
	int iCnt=0;
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("Hello\n");
	}
}

int main()
{
	int iValue;
	
	printf("Enter a number :");
	scanf("%d",&iValue);
	
	Display(iValue);				//Function Call
	
	return 0;
}