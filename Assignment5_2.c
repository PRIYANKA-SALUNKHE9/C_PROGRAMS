////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactRev()
// Description   :  Write a program which accept numberfrom user and display its factor in decreasing order
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  2 May 2022
//
////////////////////////////////////////////////////////////////////////////

//Input:	12
//Output:	6	4	3	2	1
//Input:	10
//Output:	5	2	1

#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt=0;
	
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=iNo/2;iCnt>=1;iCnt--)
	{
		if((iNo%iCnt)==0)
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
	
	FactRev(iValue);
	
	return 0;
}