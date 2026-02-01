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
// Function Name : Addition
// Description   : Calculates addition of all elements
// Input         : Pointer to head
// Output        : Integer
// Author        : Poonam Narayan Palkar
// Date          : 01/12/2025
///////////////////////////////////////////////////////////

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head->Data;
        Head = Head->Next;
    }
    return iSum;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Addition(First);
    printf("Addition is : %d\n", iRet);

    return 0;
}

/*
Test Case:
Input  : Linked List -> 10 | 20 | 30 | 40
Output : Addition is : 100
*/