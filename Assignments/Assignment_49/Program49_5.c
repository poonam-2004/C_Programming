///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
// Structure Definition
///////////////////////////////////////////////////////////
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

///////////////////////////////////////////////////////////
// Function Name : InsertFirst
// Description   : Inserts node at first position
///////////////////////////////////////////////////////////
void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
// Function Name : CountTwoDigit
// Description   : Counts two digit numbers
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int CountTwoDigit(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if((Head->data >= 10 && Head->data <= 99) ||
           (Head->data <= -10 && Head->data >= -99))
            iCnt++;

        Head = Head->next;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 9);
    InsertFirst(&First, 45);
    InsertFirst(&First, 100);
    InsertFirst(&First, 78);

    printf("Count of two digit numbers: %d\n", CountTwoDigit(First));

    return 0;
}

/*
Test Case:
Input  : 78 -> 100 -> 45 -> 9
Output : 2
*/