////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display Numbers In Descending Order
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
	
	for(iCnt1 = iRow; iCnt1 >= 1; iCnt1--)
	{
		for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
		{
				printf("%d\t",iCnt1);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter number of rows and column : ");
	scanf("%d %d",&iValue1, &iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}