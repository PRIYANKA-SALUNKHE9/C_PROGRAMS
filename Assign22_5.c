
////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplaySchedule()  
// Description   :  Accept division of student from student from user and depends on the division display exam timing.There are four division in school as A,B,C,D Exam of division A at 7AM ,B at 8.30AM,C at 9.20AM and D at 10.30AM. 
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Priyanka Salunkhe
// Date          :  15 June 2022
//
////////////////////////////////////////////////////////////////////////////

//Input : C			Output : True 
//Input : &			Output : False
 
#include <stdio.h>

void DisplaySchedule(char ClassDiv)
{

    if(((ClassDiv == 'A') && (ClassDiv < 'B')) || ((ClassDiv == 'a') && (ClassDiv < 'b')))
    {
        printf("Your Exam At 7 Am ", ClassDiv);
    }

    else if(((ClassDiv == 'B') && (ClassDiv < 'C')) || ((ClassDiv == 'b') && (ClassDiv < 'c')))
    {
        printf("Your Exam At 8.30 Am ", ClassDiv);
    }

    else if(((ClassDiv == 'C') && (ClassDiv < 'D')) || ((ClassDiv == 'c') && (ClassDiv < 'd')))
    {
        printf("Your Exam At 9.20 Am ", ClassDiv);
    }

    else if(((ClassDiv == 'D') && (ClassDiv < 'E')) || ((ClassDiv == 'd') && (ClassDiv < 'e')))
    {
        printf("Your Exam At 10.30 Am ", ClassDiv);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}