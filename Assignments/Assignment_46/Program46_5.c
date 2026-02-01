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
// Function Name : IncrementAll
// Description   : Increments all elements by 1
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void IncrementAll(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        temp->data++;
        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    IncrementAll(&First);

    return 0;
}

/*
Test Case:
Input  : 30 -> 20 -> 10
Output : 31 -> 21 -> 11
*/