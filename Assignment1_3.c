////////////////////////////////////////////////////////////////////////////
//
//Function Name  :  Check()
// Description   :  Check whether number is divisible by 5 or not
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  21 Apr 2022
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
	if((iNo%5)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet==true)
	{
		printf("Divisible by 5\n",iValue);
	}
	else
	{
		printf("Not Divisible by 5\n",iValue);
	}
	return 0;
}


