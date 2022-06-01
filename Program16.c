#include<stdio.h>

//Demonstration of ITERATIOn

void Display(int iNo)		//Definition
{
	int iCnt=0;
	
	if(iNo<0)				//Filter
	{
		printf("please enter positive value\n");
		return;
	}
	
	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		printf("Hello\n");
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number:\n");
	scanf("%d", &iValue);
	
	Display(iValue);			//Function Call
	
	return 0;
}