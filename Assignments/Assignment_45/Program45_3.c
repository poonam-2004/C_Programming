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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = *Head;
    *Head = newn;
}

///////////////////////////////////////////////////////////
// Function Name : LastOccur
// Description   : Find last occurrence of number
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int LastOccur(PNODE Head, int No)
{
    int pos = 1, last = -1;

    while(Head != NULL)
    {
        if(Head->data == No)
            last = pos;

        pos++;
        Head = Head->next;
    }
    return last;
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
    InsertFirst(&First,51);

    printf("Last Occurrence : %d\n", LastOccur(First,11));
    return 0;
}

/*
Test Case:
Input  : 11 | 21 | 11 | 51
Key    : 11
Output : Last Occurrence : 3
*/