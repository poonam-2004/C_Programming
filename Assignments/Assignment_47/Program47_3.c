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
// Function Name : SumDigits
// Description   : Calculates sum of digits of node data
// Input         : Pointer to Head
// Output        : Displays sum
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void SumDigits(PNODE Head)
{
    int No = 0, iSum = 0;

    while(Head != NULL)
    {
        No = Head->data;
        iSum = 0;

        while(No != 0)
        {
            iSum += No % 10;
            No /= 10;
        }

        printf("Sum of digits of %d : %d\n", Head->data, iSum);
        Head = Head->next;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 123);
    InsertFirst(&First, 45);
    InsertFirst(&First, 6);

    SumDigits(First);

    return 0;
}

/*
Test Case:
Input  : 6 -> 45 -> 123
Output :
Sum of digits of 6   : 6
Sum of digits of 45  : 9
Sum of digits of 123 : 6
*/