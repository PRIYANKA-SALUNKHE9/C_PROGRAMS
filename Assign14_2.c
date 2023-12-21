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
	char ch = 'A';
	
	printf("\n");
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        if(iCnt1 % 2 == 0)
        {
            char ch2 = 'a';
            for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
            {
                printf(" %c\t", ch2);
                ch2++;
            }
            printf("\n");
        }
        else
        {
            char Ch = 'A';
            for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
            {
                printf(" %c\t", Ch);
                Ch++;
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
	unsigned int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows : ");
    scanf("%u", &iValue1);

    printf("Enter Number of cols : ");
    scanf("%u", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}