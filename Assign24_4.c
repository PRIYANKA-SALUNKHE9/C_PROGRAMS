////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel()  
// Description   :  Accept string from user and check whether it contains vowels in it or not.
// Input         :  string 
// Output        :  string  
// Author        :  Priyanka Salunkhe
// Date          :  17 June 2022
//
////////////////////////////////////////////////////////////////////////////

 
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
	while(*str !='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			return 1;
		}
		str++;
	}
}

int main()
{
	char arr[20];
	BOOL bRet=FALSE;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	bRet=ChkVowel(arr);
	
	if(bRet==TRUE)
	{
		printf("It contains Vowel");
	}
	else
	{
		printf("There is no Vowel");
	}
	return 0;
}