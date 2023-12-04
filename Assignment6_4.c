////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountFour()
// Description   :  Accept Number From User And Count Frequency Of 4 Decimal Number In It
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  04 May 2022
//
////////////////////////////////////////////////////////////////////////////


 #include<stdio.h>
 
 int CountFour(int iNo)
 {
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		iNo=iNo/10;
		
		if(iDigit==4)
		{
			iCnt++;
		}
	}
	return iCnt;
 }
 
 int main()
 {
	 int iValue=0;
	 int iRet=0;
	 
	 printf("Enter number: ");
	 scanf("%d",&iValue);
	 
	 iRet=CountFour(iValue);
	 
	 printf("%d",iRet);

	 return 0;
 }