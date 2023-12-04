////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayDigit()
// Description   :  Accept Number From User And Display Its Digits In Reverse Order
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  04 May 2022
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;
}