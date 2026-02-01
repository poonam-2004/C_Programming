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
// Function Name : CountPrime
// Description   : Counts prime numbers in linked list
// Input         : Pointer to Head
// Output        : Integer
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
int CountPrime(PNODE Head)
{
    int i, iCnt = 0;
    bool flag;

    while(Head != NULL)
    {
        if(Head->data > 1)
        {
            flag = true;

            for(i = 2; i <= Head->data / 2; i++)
            {
                if(Head->data % i == 0)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
                iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 8);
    InsertFirst(&First, 7);
    InsertFirst(&First, 4);

    printf("Prime Count : %d\n", CountPrime(First));

    return 0;
}

/*
Test Case:
Input  : 4 -> 7 -> 8 -> 11
Output : Prime Count : 2
*/