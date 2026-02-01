///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
///////////////////////////////////////////////////////////
void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
// Function Name : ReplaceNegative
// Description   : Replaces negative elements with 0
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void ReplaceNegative(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->data < 0)
            temp->data = 0;

        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, -50);
    InsertFirst(&First, 40);
    InsertFirst(&First, -20);
    InsertFirst(&First, 10);

    ReplaceNegative(&First);

    return 0;
}

/*
Test Case:
Input  : -50 -> 40 -> -20 -> 10
Output : 0 -> 40 -> 0 -> 10
*/