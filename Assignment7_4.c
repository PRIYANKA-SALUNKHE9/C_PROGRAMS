////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MultDigits()
// Description   :  Accept Number From User And Return Multiplication Of All Digits
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  11 May 2022
//
////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 
 int MultDigits(int iNo)
 {
	int iDigit=0;
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	return iMult;
 }
 
 int main()
 {
	 int iValue=0;
	 int iRet=0;
	 
	 printf("Enter number: ");
	 scanf("%d",&iValue);
	 
	 iRet=MultDigits(iValue);
	 
	 printf("%d",iRet);
	 return 0;
 }