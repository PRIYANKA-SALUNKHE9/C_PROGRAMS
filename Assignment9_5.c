////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Freuency()  
// Description   :  Accept N Input From User & Accept one another number as No, Return Frequency Of No form it.
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  12 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf(" Enter the number to find : ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return - 1;
    }

    printf("Enter number of elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);
    printf("Frequency Of Given Number Is : %d\n", iRet);

    free(p);

    return 0;
}