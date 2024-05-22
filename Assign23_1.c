////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayASCII()  
// Description   :  Display ASCII Table 
// Input         :  -----
// Output        :  -----
// Author        :  Priyanka Salunkhe
// Date          :  15 June 2022
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII()

{

    int i= 0;

    printf("--------------------------------\n");

    printf("ASCII TABLE \n");

    printf("---------------------------------\n");

    for(i = 0; i <= 128; i++) // for(i = 0; i <= 255; i++)

    {

        printf("%d\t%x\t%c\t%o\n", i, i, i, i);

    }

    printf("----------------------------------\n");

}

int main()

{

    DisplayASCII();
    return 0;

}