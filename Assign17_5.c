////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept number of rows and number of column from user and display pattern 
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  16 May 2022
//
////////////////////////////////////////////////////////////////////////////

/*
	Input:	iRow=4	iCol=4
	Output:		1	2	3	4
					2	3	4
						3	4	
							4
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt1=0,iCnt2=0;
	
	for(iCnt1=1;iCnt1<=iRow;iCnt1++)
	{
		for(iCnt2=1;iCnt2<=iCol;iCnt2++)
		{
			if(iCnt1>iCnt2)
			{
				printf(" \t");
			}
			else
			{
				printf("%d\t",iCnt2);
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter number of rows and column \n");
	scanf("%d %d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}