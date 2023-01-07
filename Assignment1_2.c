////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Print 5 to 1 numbers on screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  21 Apr 2022
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{

	int i=5;
	
	for(i=5;i>=1;--i)
	{
		printf("%d\n",i);
	}
}

int main()
{
	
	Display();
	
	return 0;
}


