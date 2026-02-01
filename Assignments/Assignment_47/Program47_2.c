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
// Function Name : CountDigits
// Description   : Counts digits of each node data
// Input         : Pointer to Head
// Output        : Displays digit count
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void CountDigits(PNODE Head)
{
    int No = 0, iCnt = 0;

    while(Head != NULL)
    {
        No = Head->data;
        iCnt = 0;

        if(No == 0)
            iCnt = 1;

        while(No != 0)
        {
            iCnt++;
            No /= 10;
        }

        printf("Digits in %d : %d\n", Head->data, iCnt);
        Head = Head->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 25);
    InsertFirst(&First, 7);

    CountDigits(First);

    return 0;
}

/*
Test Case:
Input  : 7 -> 25 -> 101
Output :
Digits in 7   : 1
Digits in 25  : 2
Digits in 101 : 3
*/