//Count even numbers from array:

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int iCounter=0;
	int iCnt=0;
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iCounter++;
		}
	}
	return iCounter;
}

int main()
{
	int *ptr=NULL;
	int iCnt=0;
	int iSize=0;
	int iRet=0;
	
	printf("Enter number of elements:\n");
	scanf("%d", &iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values for array:\n");
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);
	}
	iRet=CountEven(ptr, iSize);
	
	printf("%d", iRet);
}