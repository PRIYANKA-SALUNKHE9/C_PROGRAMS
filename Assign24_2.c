////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountCapital()  
// Description   :  Accept string from user and count number of small characters.
// Input         :  string ("Priyanka")
// Output        :  integer (7)
// Author        :  Priyanka Salunkhe
// Date          :  17 June 2022
//
////////////////////////////////////////////////////////////////////////////

 
#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountSmall(arr);
	
	printf("%d",iRet);
	
	return 0;
}