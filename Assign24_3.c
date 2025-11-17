////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()  
// Description   :  Accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Input         :  string 
// Output        :  integer 
// Author        :  Priyanka Salunkhe
// Date          :  17 June 2022
//
////////////////////////////////////////////////////////////////////////////

 
#include<stdio.h>

int Difference(char *str)
{
	int iCnt=0,iCnts=0,iDiff=0;
	
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			iCnts++;
		}
		str++;
		iDiff=iCnts-iCnt;
	}
	return iDiff;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=Difference(arr);
	
	printf("%d",iRet);
	
	return 0;
}