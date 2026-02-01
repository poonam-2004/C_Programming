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
// Function Name : Display
// Description   : Displays linked list
///////////////////////////////////////////////////////////
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |-> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////
// Function Name : ReplaceOdd
// Description   : Replaces odd elements with 1
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void ReplaceOdd(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if((temp->data % 2) != 0)
            temp->data = 1;

        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 15);
    InsertFirst(&First, 8);

    Display(First);
    ReplaceOdd(&First);
    Display(First);

    return 0;
}

/*
Test Case:
Input  : 8 -> 15 -> 20 -> 11
Output : 8 -> 1 -> 20 -> 1
*/