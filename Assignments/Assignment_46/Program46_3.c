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
// Function Name : IsEmpty
// Description   : Checks whether linked list is empty
// Output        : Boolean
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
bool IsEmpty(PNODE Head)
{
    if(Head == NULL)
        return true;
    else
        return false;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    if(IsEmpty(First))
        printf("Linked list is empty\n");

    InsertFirst(&First, 10);

    if(!IsEmpty(First))
        printf("Linked list is not empty\n");

    return 0;
}

/*
Test Case:
Input  : No nodes
Output : Linked list is empty

Input  : Insert 10
Output : Linked list is not empty
*/