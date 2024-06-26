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
	Input:	iRow=5		iCol=5
	Output:		1	2	3	4	5	
				1	2			5
				1		3		5
				1			4	5
				1	2	3	4	5
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt1=0,iCnt2=0;
	
	for(iCnt1=1;iCnt1<=iRow;iCnt1++)
	{
		for(iCnt2=1;iCnt2<=iCol;iCnt2++)
		{
			if(iCnt1==1 || iCnt1==iRow || iCnt2==1 || iCnt2==iCol || iCnt1==iCnt2)
			{
				printf("%d\t",iCnt2);
			}
			else 
			{
				printf(" \t");
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