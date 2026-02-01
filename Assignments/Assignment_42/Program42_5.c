///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
// Structure Definition
///////////////////////////////////////////////////////////

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

///////////////////////////////////////////////////////////
// Function Name : InsertFirst
// Description   : Inserts node at first position
///////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
// Function Name : Minimum
// Description   : Finds minimum element
// Input         : Pointer to head
// Output        : Integer
// Author        : Poonam Narayan Palkar
// Date          : 01/12/2025
///////////////////////////////////////////////////////////

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data < iMin)
            iMin = Head->Data;

        Head = Head->Next;
    }
    return iMin;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Minimum(First);
    printf("Minimum element : %d\n", iRet);

    return 0;
}

/*
Test Case:
Input  : Linked List -> 110 | 230 | 20 | 240 | 640
Output : Minimum element : 20
*/