////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display Char In A, a On Screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  14 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt1 = 0, iCnt2 = 0;
	char ch = '\0';
	
	printf("\n");
	for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
	{
		for(iCnt2 = 1, ch = 'A'; iCnt2 <= iCol; iCnt2++, ch++)
		{
				printf("%c\t",ch);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows and column : ");
	scanf("%d %d",&iValue1, &iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}