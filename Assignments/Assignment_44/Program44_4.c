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
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = *first;
    *first = newn;
}

///////////////////////////////////////////////////////////
// Function Name : Frequency
// Description   : Counts frequency of given element
// Input         : Pointer to head, Integer
// Output        : Integer
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int Frequency(PNODE Head, int No)
{
    int count = 0;

    while(Head != NULL)
    {
        if(Head->data == No)
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
    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,11);

    printf("Frequency of 11 : %d\n", Frequency(head,11));
    return 0;
}

/*
Test Case:
Input  : Linked List -> 11 | 11 | 21 | 11
Output : Frequency of 11 : 3
*/