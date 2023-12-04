////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()  
// Description   :  Accept N From User & Return Difference Of Summation Of Even And Odd Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  9 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iCnt=0,iEvenSum=0;
	int iOddSum=0;
	int iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iEvenSum=iEvenSum+Arr[iCnt];
		}
		else
		{
			iOddSum=iOddSum+Arr[iCnt];
		}
	}
	iDiff=iEvenSum-iOddSum;
	
	return iDiff;
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements : "); 
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize *sizeof(int));

	printf("Enter Elements : \n");
	
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{ 
		scanf("%d",&p[iCnt]);
	}
	
	iRet= Difference(p, iSize);
	printf("Difference is: %d",iRet);

	free(p);
	return 0;
}