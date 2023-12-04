////////////////////////////////////////////////////////////////////////////
//
// Function Name :  NonFact()
// Description   :  Accept Number From User And Display Non Factors Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  29 Apr 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void NonFact(int iNo)
{
	int iCnt = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d ",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	NonFact(iValue);
	
	return 0;
}
