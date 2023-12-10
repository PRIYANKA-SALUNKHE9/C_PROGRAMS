////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Range()  
// Description   :  Accept 3 Input From User & Check Whether That Number Is In Range Or Not
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  12 May 2022
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	
	printf("Elements Between The Range Are : \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\n", Arr[iCnt]);
        }
	}
}

int main()
{
	int iSize = 0,iCnt = 0,iRet=0;
	int iValue1=0,iValue2=0;
	int *p = NULL;
	
	printf("Enter number of elements: "); 
	scanf("%d",&iSize);
	
	printf("Enter the starting point: ");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point: ");
	scanf("%d",&iValue2);
	
	p = (int *)malloc(iSize *sizeof(int));

	if(p  == NULL)
	{
		printf("Unable to allocate memory"); 
		return -1;
	}
	printf("Enter the element: \n");

	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	Range(p,iSize,iValue1,iValue2);

	free(p);
	return 0;
}