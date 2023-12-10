////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DigitsSum()  
// Description   :  Accept N numbers from user and display summation of digits of each number
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  13 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, iSum = 0, iDigit = 0;

    if(Arr == NULL)
    {
        return;
    }

    for(i = 0; i < iLength; i++)
    {
        iSum = 0; 

        while(Arr[i] > 0)
        {
            iDigit = Arr[i]%10;
            iSum = iSum + iDigit;
            Arr[i] = Arr[i]/10;
        }
        printf("%d ", iSum);
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
    
    DigitsSum(p, iSize);

    free(p);

    return 0;
}