////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkAlpha()
// Description   :  Accept character from user and check whether it is alphabet or not (A-Z,a-z).
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Priyanka Salunkhe
// Date          :  15 June 2022
//
////////////////////////////////////////////////////////////////////////////

//Input : F			Output : True 
//Input : d			Output : False
 
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if(ch>='A' && ch<='Z')
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
	
	bRet=ChkAlpha(cValue);
	
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