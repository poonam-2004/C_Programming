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
// Function Name : InsertLast
// Description   : Inserts node at last position
///////////////////////////////////////////////////////////
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
        return;
    }

    PNODE temp = *Head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newn;
}

///////////////////////////////////////////////////////////
// Function Name : CheckSorted
// Description   : Checks whether list is sorted
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
bool CheckSorted(PNODE Head)
{
    while(Head->next != NULL)
    {
        if(Head->data > Head->next->data)
            return false;

        Head = Head->next;
    }
    return true;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertLast(&First, 10);
    InsertLast(&First, 20);
    InsertLast(&First, 30);

    if(CheckSorted(First))
        printf("List is sorted\n");
    else
        printf("List is NOT sorted\n");

    return 0;
}

/*
Test Case:
Input  : 10 -> 20 -> 30
Output : List is sorted
*/