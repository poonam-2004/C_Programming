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
// Function Name : DisplayLess
// Description   : Displays elements less than given number
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void DisplayLess(PNODE Head, int X)
{
    while(Head != NULL)
    {
        if(Head->data < X)
        {
            printf("%d\t", Head->data);
        }
        Head = Head->next;
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 60);
    InsertFirst(&First, 10);
    InsertFirst(&First, 40);
    InsertFirst(&First, 20);

    DisplayLess(First, 25);

    return 0;
}

/*
Test Case:
Input  : 60 -> 10 -> 40 -> 20
         X = 25
Output : 10 20
*/