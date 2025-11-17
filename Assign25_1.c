////////////////////////////////////////////////////////////////////////////
//
// Function Name :  strlwrX()  
// Description   :  Accept string from user and convert it into lower case.
// Input         :  string 
// Output        :  string  
// Author        :  Priyanka Salunkhe
// Date          :  18 June 2022
//
////////////////////////////////////////////////////////////////////////////
	
 
#include<stdio.h>

void strlwrX(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string :");
	scanf("%[^'\n']s",arr);
	
	strlwrX(arr);
	
	printf("Modified string is : %s",arr);
	
	return 0;
}