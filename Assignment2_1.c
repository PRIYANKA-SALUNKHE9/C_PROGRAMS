////////////////////////////////////////////////////////////////////////////
//
//Function Name  :  Accept()
// Description   :  Accept HardCoded Number and print that number of * on screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  21 Apr 2022
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;
}
