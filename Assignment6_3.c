////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountTwo()
// Description   :  Accept Number From User And Count Frequency Of 2 Decimal Number In It
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  04 May 2022
//
////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 
 int CountTwo(int iNo)
 {
	int iDigit = 0;
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		if(iNo % 10  == 2)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
 }
 
 int main()
 {
	 int iValue = 0;
	 int iRet = 0;
	 
	 printf("Enter number: ");
	 scanf("%d",&iValue);
	 
	 iRet=CountTwo(iValue);
	 
	 printf("%d",iRet);
	 
	 return 0;
 }