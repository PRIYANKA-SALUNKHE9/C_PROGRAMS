////////////////////////////////////////////////////////////////////////////
//
// Function Name :  LastOcc()  
// Description   :  Accept 2 Input From User & Find Last Occurance Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  12 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iNo==Arr[iCnt])
		{
			break;
		}
	}
	return iCnt;
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
	printf("Enter the Element: \n");

	for(iCnt = 0;iCnt<iSize;iCnt++)
	{ 
		scanf("%d",&p[iCnt]);
	}
	
	iRet=LastOcc(p,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("there is no such number");
	}
	else
	{
		printf("Last occurance of number is %d",iRet);
	}

	free(p);
	return 0;
}