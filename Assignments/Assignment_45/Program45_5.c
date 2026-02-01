///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
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
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
// Function Name : CountLess
// Description   : Count elements less than X
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int CountLess(PNODE Head, int X)
{
    int count = 0;

    while(Head != NULL)
    {
        if(Head->data < X)
            count++;

        Head = Head->next;
    }
    return count;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,101);

    printf("Count Less Than 50 : %d\n", CountLess(First,50));
    return 0;
}

/*
Test Case:
Input  : 11 | 51 | 21 | 101
X      : 50
Output : 2
*/