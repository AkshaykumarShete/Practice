#include<stdio.h>

int Addition(int , int);

////////////////////////////////////////////////////////////
// Write a program to perform addition of 2 numbers
////////////////////////////////////////////////////////////

int main()
{
	auto int iValue1=0;
	auto int iValue2=0;
	int iValue3=0;
	
	printf("Enter first number:\n");
	scanf("%d", &iValue1);
	
	printf("Enter second number:\n");
	scanf("%d", &iValue2);
	
	iValue3=Addition(iValue1, iValue2);
	printf("Addition is %d\n", iValue3);
	
	return 0;
}
/////////////////////////////////////////////////////////////
//
//Input:	11	10
//Output:	21
//
/////////////////////////////////////////////////////////////
