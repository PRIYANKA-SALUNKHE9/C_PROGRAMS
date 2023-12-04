////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange()
// Description   :  Accept Number From User And Return Count Of Digits In Between 3 To 7
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  11 May 2022
//
////////////////////////////////////////////////////////////////////////////

 
 #include<stdio.h>
 
 int CountRange(int iNo)
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
		
		if((iDigit>3)&&(iDigit<7))
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
	 
	 printf("Enter number\n");
	 scanf("%d",&iValue);
	 
	 iRet=CountRange(iValue);
	 
	 printf("%d",iRet);
	 return 0;
 }