////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumNonFact()
// Description   :  Accept Number From User And Display Summation Of Non Factors Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  29 Apr 2022
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{	
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet= SumNonFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}