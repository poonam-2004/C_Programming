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
// Function Name : DisplayGreaterThanAvg
// Description   : Displays elements greater than average
// Input         : Pointer to head
// Author        : Poonam Narayan Palkar
// Date          : 29/12/2025
///////////////////////////////////////////////////////////
void DisplayGreaterThanAvg(PNODE Head)
{
    int sum = 0, cnt = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        sum += temp->data;
        cnt++;
        temp = temp->next;
    }

    float avg = (float)sum / cnt;

    while(Head != NULL)
    {
        if(Head->data > avg)
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

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);

    printf("Elements greater than average:\n");
    DisplayGreaterThanAvg(First);

    return 0;
}

/*
Test Case:
Input  : 40 -> 30 -> 20 -> 10
Average: 25
Output : 40   30
*/