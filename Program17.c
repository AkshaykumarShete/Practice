#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)					//Updater
	{
		iNo=-iNo;
	}
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("Hello\n");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number");
	scanf("%d", &iValue);
	
	Display(iValue);
	
	return 0;
}