////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FirstOcc()  
// Description   :  Accept 2 Input From User & Find First Occurance Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  12 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iNo==Arr[iCnt])
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iSize = 0,iCnt = 0,iRet=0;
	int iValue=0;
	int *p = NULL;
	
	printf("Enter number of elements: "); 
	scanf("%d",&iSize);
	
	printf("Enter the Elements you want to search : ");
	scanf("%d",&iValue);
	
	p = (int *)malloc(iSize *sizeof(int));

	if(p  == NULL)
	{
		printf("Unable to allocate memory"); 
		return -1;
	}

	printf("Enter element\n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet=FirstOcc(p,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("there is no such number");
	}
	else
	{
		printf("First occurance Found At Index : %d\n",iRet);
	}

	free(p);
	return 0;
}