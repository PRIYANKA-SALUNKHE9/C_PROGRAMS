////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Maximum()  
// Description   :  Accept N numbers from user and return the largest number 
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  13 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
	int iCnt = 0;
	int iMax = 0;
	
	if(Arr == NULL)
    {
        return -1;
    }

	iMax = Arr[0];// compare the previous value to check the existing value is greater than previous or not 
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int iSize = 0,iCnt = 0,iRet=0;
	int *p = NULL;
	
	printf("Enter number of elements\n"); 
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize *sizeof(int));

	if(p  == NULL)
	{
		printf("Unable to allocate memory"); 
		return -1;
	}

	printf("Enter The elements: \n");

	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Maximum(p,iSize);
	printf("Largest number is %d",iRet);
	
	free(p);
	return 0;
}