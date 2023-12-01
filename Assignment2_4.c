////////////////////////////////////////////////////////////////////////////
//
//Function Name  :  Display()
// Description   :  Accept two number from user and display first number in second number of times
// Input         :  Integer,Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  22 Apr 2022
//
////////////////////////////////////////////////////////////////////////////

// Input:  12  5
//Output:  12  12   12   12   12

// Input:  -2  3
//Output:  -2  -2   -2   


#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency =- iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    return 0;
}
