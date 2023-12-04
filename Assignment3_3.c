////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayEvenFactor()
// Description   :  Accept Number From User And Display Even Factors Of That Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  26 Apr 2022
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	int i=0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	for(i = 1;i <= iNo/2; i++)
	{
		if((( iNo % i) == 0) && (i % 2 == 0))
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayEvenFactor(iValue);
	return 0;
}

