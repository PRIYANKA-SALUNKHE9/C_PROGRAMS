////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactDiff()
// Description   :  Write program which accept number from user and return difference between summation of all its factors and non factors
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  2 May 2022
//
////////////////////////////////////////////////////////////////////////////

//Input:	12
//Output:	-34		(16-50)


#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0;
	int iFactCnt1=0,iFactCnt2=0;
	int iFactDiff=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{	
			iFactCnt1=iFactCnt1+iCnt;
			iFactCnt1++;      
		}
		else
		{
			iFactCnt2=iFactCnt2+iCnt;
			iFactCnt2++;
		}
		iFactDiff=iFactCnt1-iFactCnt2;
	}
	return iFactDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}