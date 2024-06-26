////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayProduct()  
// Description   :  Find Product Of All Digits From Singly Linear Linked List 
// Input         :  Integer
// Output        :  Integer
// Author        :  Priyanka Salunkhe
// Date          :  10 June 2022
////////////////////////////////////////////////////////////////////////////




#include <stdio.h>
#include <stdlib.h>

struct node

{

    int Data;

    struct node * Next;

};

typedef struct node NODE;

typedef struct node* PNODE;

typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no )

{

    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;

    newn->Data = no;

    if (*Head == NULL)

    {

        *Head = newn;

    }

    else

    {

        newn -> Next = *Head;

        *Head = newn;

    }

}




void DisplayProduct( PNODE Head)

{

    int iDigit = 0, Sum = 0;

    while (Head != NULL)

    {

        Sum = 1;

        while (Head -> Data > 0)

        {

            iDigit = Head -> Data % 10;

            {

                Sum = Sum * iDigit;

            }

            Head -> Data = Head -> Data / 10;

        }

        printf("%d\t", Sum);

        Head = Head -> Next;

    }

}




void Display(PNODE Head)

{

    while (Head != NULL)

    {

        printf("|%d|->\t", Head -> Data);

        Head = Head -> Next;

    }

    printf("NULL\n");

}




int main()

{




    PNODE First = NULL;




    InsertFirst(&First, 41);   

    InsertFirst(&First, 32);

    InsertFirst(&First, 21);

    InsertFirst(&First, 11);

    Display(First);




    DisplayProduct(First);




    return 0;

}