//Display sum of factors:

// Input :      10
// Output :    8

// Input :      9
// Output :     4

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
	int iSum=0;
	
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum=iSum+iCnt;
        }
    }
	return iSum;
}

int main()
{
    int iValue = 0;
	int iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);
	
	printf("%d\n", iRet);
	
    return 0;
}

// Time Complexity : O(N/2)