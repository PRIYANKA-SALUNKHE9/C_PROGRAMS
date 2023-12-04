////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayConvert()
// Description   :  Accept Character From User And Convert Upper Case To Lower Case & Vice Varsa 
// Input         :  Char
// Output        :  Char
// Author        :  Priyanka Salunkhe
// Date          :  28 Apr 2022
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int DisplayConvert(int CValue)
{

    if(CValue >= 97 && CValue <= 122)
    {
        printf("%c", CValue - 32); // -32 because 97-32 = 65 is Capital 
    }
    else if(CValue >= 65 && CValue <= 90)
    {
        printf("%c", CValue + 32); // +32 because 65+32 = 97 is Smaller
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue );
    
    return 0;
}