////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintEven()
// Description   :  Accept Number From User And Display That Number Of Time Even Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  26 Apr 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt=0;
	
	if(iNo <= 0)
	{
		return;
	}
	
	for(iCnt = 1; iCnt <= 2 * iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
	int iValue=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	PrintEven(iValue);
	
	return 0;
}
