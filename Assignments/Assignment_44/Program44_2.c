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
// Function Name : CountEven
// Description   : Counts even elements in linked list
// Input         : Pointer to head
// Output        : Integer
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
//
///////////////////////////////////////////////////////////
int CountEven(PNODE Head)
{
    int count = 0;

    while(Head != NULL)
    {
        if(Head->data % 2 == 0)
            count++;

        Head = Head->next;
    }
    return count;
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
    InsertFirst(&head,40);

    printf("Even count : %d\n", CountEven(head));
    return 0;
}

/*
Test Case:
Input  : Linked List -> 40 | 20 | 11
Output : Even count : 2
*/