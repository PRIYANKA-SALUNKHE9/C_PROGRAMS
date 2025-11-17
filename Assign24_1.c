////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountCapital()  
// Description   :  Accept string from user and count number of capital characters.
// Input         :  string ("Marvellous Multi OS")
// Output        :  integer (4)
// Author        :  Priyanka Salunkhe
// Date          :  17 June 2022
//
////////////////////////////////////////////////////////////////////////////

 
#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
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
	
	iRet=CountCapital(arr);
	
	printf("%d",iRet);
	
	return 0;
}