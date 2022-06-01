// Program to display N numbers on screen
// Output   1   2   3   4   5
//updater

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("%d\n", iCnt);
	}
}

int main()
{
	auto int iValue=0;
	
	printf("Enter a number\n");
	scanf("%d", &iValue);
	
	Display(iValue);
	
	return 0;
}
