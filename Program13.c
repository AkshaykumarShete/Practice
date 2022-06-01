//Program to display 5 times Hello on the Screen:

#include<stdio.h>

void Display()
{
	int iCnt=0;
	
	for(iCnt=1; iCnt<=5; iCnt++)
	{
		printf("Hello\n");
	}
}

int main()
{
	Display();					//Function Call
	
	return 0;
}