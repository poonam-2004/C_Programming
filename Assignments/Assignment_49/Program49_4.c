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
// Function Name : CountDivByFive
// Description   : Counts elements divisible by 5
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int CountDivByFive(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if((Head->data % 5) == 0)
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

    InsertFirst(&First, 25);
    InsertFirst(&First, 10);
    InsertFirst(&First, 7);
    InsertFirst(&First, 5);

    printf("Count divisible by 5: %d\n", CountDivByFive(First));

    return 0;
}

/*
Test Case:
Input  : 5 -> 7 -> 10 -> 25
Output : 3
*/