////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactRec()
// Description   :  Accept Number From User And Display Factors In Descending Order
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  29 Apr 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 0;
	int iFactRev=0;
	
    for(iCnt = iNo/2; iCnt >=1; iCnt--)
    {
		if(iNo % iCnt == 0)
		{
           printf("%d ",iCnt);
		}
    }
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}
