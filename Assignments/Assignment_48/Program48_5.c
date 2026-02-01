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
// Function Name : DisplayOddPosition
// Description   : Displays elements at odd positions
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void DisplayOddPosition(PNODE Head)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(iPos % 2 != 0)
            printf("%d\t", Head->data);

        iPos++;
        Head = Head->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    DisplayOddPosition(First);

    return 0;
}

/*
Test Case:
Input  : 10 -> 20 -> 30 -> 40 -> 50
Output : 10 30 50
*/