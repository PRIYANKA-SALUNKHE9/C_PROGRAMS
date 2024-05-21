////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept number of rows and number of column from user and display pattern 
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  15 May 2022
//
////////////////////////////////////////////////////////////////////////////

//Q4. Accept number of rows and number of column from user and display below pattern.
/*
	Input:	iRow=6		iCol=5
	Output:		*	*	*	*	*
				*	@	@	@	*
				*	@	@	@	*
				*	@	@	@	*
				*	@	@	@	*
				*	*	*	*	*
							
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt1=0,iCnt2=0;
	
	for(iCnt1=1;iCnt1<=iRow;iCnt1++)
	{
		for(iCnt2=1;iCnt2<=iCol;iCnt2++)
		{
			if(iCnt1==1 || iCnt1==iRow || iCnt2==1 || iCnt2==iCol)
			{
				printf("*\t");
			}
			else 
			{
				printf("@\t");
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