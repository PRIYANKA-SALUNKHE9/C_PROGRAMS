////////////////////////////////////////////////////////////////////////////
//
//Function Name  :  ChkEven()
// Description   :  Accept number from user and check whether number is even or odd
// Input         :  Integer
// Output        :  String
// Author        :  Priyanka Salunkhe
// Date          :  25 Apr 2022
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if((iNo%2) == 0)
	{
		return TRUE;
	}	
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);

	if(bRet==TRUE)
	{
		printf("%d is even number\n",iValue);
	}
	else
	{
		printf("%d is odd number\n",iValue);
	}
	
	return 0;
}
