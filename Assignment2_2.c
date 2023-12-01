////////////////////////////////////////////////////////////////////////////
//
//Function Name  :  Display()
// Description   :  Accept one number from user and print that number of * on screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  21 Apr 2022
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
	
	while(iNo>0)
	{
		printf("*",iNo);
		iNo--;
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
