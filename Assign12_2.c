////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Display Pattern Input 5 :- 5 # 4 # 3 # 2 # 1 #
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  14 May 2022
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;

    if(iNo < 0)
    {
        printf("Enter Number Which Is Greater Than 0");
        return;
    }

    printf("\n");
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
    printf("\n");
}

int main()
{
	int iValue=0;
	
	printf("Enter number of element\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}