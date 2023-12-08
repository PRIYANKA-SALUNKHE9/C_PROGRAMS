////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumEvenElements()  
// Description   :  Accept Number From User & Return Frequency And Difference Of Even, Odd Numbers 
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  11 May 2022
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0, iDiff = 0;
	int iEven = 0, iOdd = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	iDiff = iEven - iOdd;
	return iDiff;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet=0;
	int *p = NULL;
	
	printf("Enter Number of Elements: "); 
	scanf("%d", &iSize);
	
	p = (int *)malloc(iSize *sizeof(int));

	if(p  == NULL)
	{
		printf("Unable to allocate memory"); 
		return -1;
	}

	printf("Enter The Element: \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Frequency(p, iSize);
	printf("Difference is:%d\n",iRet);

	free(p);
	return 0;
}