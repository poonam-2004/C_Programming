///////////////////////////////////////////////////////////
//
// Required Header Files
//
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
// Function Name : Search
// Description   : Searches given element in linked list
// Input         : Pointer to head, Integer
// Output        : Boolean
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
//
///////////////////////////////////////////////////////////
bool Search(PNODE Head, int No)
{
    while(Head != NULL)
    {
        if(Head->data == No)
            return true;

        Head = Head->next;
    }
    return false;
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
    InsertFirst(&head,21);
    InsertFirst(&head,51);

    if(Search(head,21))
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    return 0;
}

/*
Test Case:
Input  : Linked List -> 51 | 21 | 11
         Search Element : 21
Output : Element Found
*/