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
// Function Name : DisplayAtPos
// Description   : Displays node at given position
// Input         : Pointer to head, Position
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void DisplayAtPos(PNODE Head, int pos)
{
    int i = 1;

    while(Head != NULL)
    {
        if(i == pos)
        {
            printf("Node at position %d is %d\n", pos, Head->data);
            return;
        }
        i++;
        Head = Head->next;
    }

    printf("Invalid position\n");
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);

    DisplayAtPos(First, 2);

    return 0;
}

/*
Test Case:
Input  : 40 -> 30 -> 20 -> 10
Position: 2
Output : Node at position 2 is 30
*/