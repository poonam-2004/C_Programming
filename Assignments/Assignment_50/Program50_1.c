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
// Function Name : MakeAbsolute
// Description   : Converts all elements to absolute values
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void MakeAbsolute(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->data < 0)
            temp->data = -temp->data;

        temp = temp->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, -10);
    InsertFirst(&First, 20);
    InsertFirst(&First, -30);

    printf("Before:\n");
    Display(First);

    MakeAbsolute(&First);

    printf("After:\n");
    Display(First);

    return 0;
}

/*
Test Case:
Input  : -30 -> 20 -> -10
Output : 30 -> 20 -> 10
*/