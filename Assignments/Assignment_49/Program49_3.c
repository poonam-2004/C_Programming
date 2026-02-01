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
// Function Name : DisplayDivByThree
// Description   : Displays elements divisible by 3
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void DisplayDivByThree(PNODE Head)
{
    while(Head != NULL)
    {
        if((Head->data % 3) == 0)
            printf("%d\t", Head->data);

        Head = Head->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 9);
    InsertFirst(&First, 10);
    InsertFirst(&First, 12);
    InsertFirst(&First, 7);

    printf("Elements divisible by 3:\n");
    DisplayDivByThree(First);

    return 0;
}

/*
Test Case:
Input  : 7 -> 12 -> 10 -> 9
Output : 12   9
*/