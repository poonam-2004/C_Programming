///////////////////////////////////////////////////////////
//
// Required Header Files
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Structure Definition
//
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
//
// Function Name : InsertFirst
// Description   : Inserts node at first position
//
///////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = *first;
    *first = newn;
}

///////////////////////////////////////////////////////////
//
// Function Name : DisplayEven
// Description   : Displays even elements from linked list
// Input         : Pointer to head
// Output        : None
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
//
///////////////////////////////////////////////////////////
void DisplayEven(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->data % 2 == 0)
            printf("| %d | -> ", Head->data);

        Head = Head->next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////
int main()
{
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,31);
    InsertFirst(&head,40);

    DisplayEven(head);
    return 0;
}

/*
Test Case:
Input  : Linked List -> 40 | 31 | 20 | 11
Output : | 40 | -> | 20 | -> NULL
*/