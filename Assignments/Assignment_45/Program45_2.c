#include<stdio.h>
#include<stdlib.h>

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
// Description   : Insert node at beginning of linked list
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
// Function Name : FirstOccur
// Description   : Find first occurrence of number
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int FirstOccur(PNODE Head, int No)
{
    int pos = 1;

    while(Head != NULL)
    {
        if(Head->data == No)
            return pos;

        pos++;
        Head = Head->next;
    }
    return -1;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    printf("First Occurrence : %d\n", FirstOccur(First,11));
    return 0;
}

/*
Test Case:
Input  : 11 | 21 | 11
Key    : 11
Output : First Occurrence : 1
*/