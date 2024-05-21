////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit()
// Description   :   Accept character from user and check whether it is small case or not (a-z).
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Priyanka Salunkhe
// Date          :  15 June 2022
//
////////////////////////////////////////////////////////////////////////////
 
//Input : g			Output : True 
//Input : D			Output : False
 
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
	if(ch>='a' && ch<='z')
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
	
	bRet=ChkSmall(cValue);
	
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