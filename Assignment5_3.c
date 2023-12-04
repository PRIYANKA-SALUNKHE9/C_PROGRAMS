////////////////////////////////////////////////////////////////////////////
//
// Function Name :  NonFact()
// Description   :  Write a program which accept number from user and display all its non factors
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  2 May 2022
//
////////////////////////////////////////////////////////////////////////////

//Input:	12
//Output:	5	7	8	9	10	11

#include<stdio.h>

void NonFact(int iNo)
{
	int iCnt=0;
	
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
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