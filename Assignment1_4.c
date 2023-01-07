////////////////////////////////////////////////////////////////////////////
//
//Function Name  :  Accept()
// Description   :  Accept one number from user and print that number of * on screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  21 Apr 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("*",iCnt);
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Accept(iValue);
	return 0;
}

