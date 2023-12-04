////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Description   :  Accept Number From User & Display Elements Which Are Divisible By 5 
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  9 May 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;
	
	if((Arr == NULL) || (iLength <= 0))
    {
        return;
    }

	printf("Elements Divisible By 5 Are :  ");
	for(iCnt = 0;iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 5 == 0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0,iCnt = 0;
	int *p = NULL;	//pointer
	
	printf("Enter number of elements: "); 
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize *sizeof(int));

	if(p  == NULL)
	{
		printf("Unable to allocate memory"); 
		return -1;
	}

	printf("Enter element: \n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	Display(p,iSize);

	free(p);
	return 0;
}