/////////////////////////////////////////////////////////////
//
//Function Name:	Addition
//Description:		Used to perform Addition of 2 numbers
//Input:			Integer, Integer
//Output:			Integer
//Date:				12/04/2022
//Author:			Akshaykumar Shivaraj Shete
//
/////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
	int iNo3=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
	iNo3=iNo1+iNo2;
	
	return iNo3;
}