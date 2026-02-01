///////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Structure Definition
//
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
//
// Function Name : InsertFirst
// Description   : Inserts node at first position
//
///////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
//
// Function Name : SearchFirstOcc
// Description   : Finds first occurrence of number
// Input         : Pointer to head, Integer
// Output        : Integer
// Author        : Poonam Narayan Palkar
// Date          : 01/12/2025
//
///////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
            return iPos;

        iPos++;
        Head = Head->Next;
    }
    return -1;
}

///////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 30);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 10);

    iRet = SearchFirstOcc(First, 30);
    printf("First occurrence position : %d\n", iRet);

    return 0;
}

/*
Test Case:
Input  : Linked List -> 10 | 30 | 40 | 50 | 30
         Number to search : 30
Output : First occurrence position : 2
*/