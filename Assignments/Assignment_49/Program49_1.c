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
// Function Name : Difference
// Description   : Returns difference between max and min
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int Difference(PNODE Head)
{
    int iMax = Head->data;
    int iMin = Head->data;

    while(Head != NULL)
    {
        if(Head->data > iMax)
            iMax = Head->data;
        if(Head->data < iMin)
            iMin = Head->data;

        Head = Head->next;
    }
    return (iMax - iMin);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 40);
    InsertFirst(&First, 10);
    InsertFirst(&First, 60);
    InsertFirst(&First, 20);

    printf("Difference is: %d\n", Difference(First));

    return 0;
}

/*
Test Case:
Input  : 20 -> 60 -> 10 -> 40
Output : 50
*/