////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit()
// Description   :  Accept character from user and check whether it is digit or not (0-9).
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Priyanka Salunkhe
// Date          :  15 June 2022
//
////////////////////////////////////////////////////////////////////////////
 
//Input : 7			Output : True 
//Input : d			Output : False
 
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if(ch>='0' && ch<='9')
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
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet=ChkDigit(cValue);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}