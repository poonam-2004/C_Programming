///////////////////////////////////////////////////////////
// 
// Required Header Files
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Required Macros
//
///////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////
//
//  Structure Definition
//
///////////////////////////////////////////////////////////

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/* Insert node at first position */
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

/* 1. Display Perfect numbers */
int DisplayPerfect(PNODE Head)
{
    int iNo = 0, iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        for(int i = 1; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == iNo)
        {
            printf("%d\t", iNo);
        }
        Head = Head->Next;
    }
    printf("\n");
    return 0;
}

/* 2. Display Prime numbers */
int DisplayPrime(PNODE Head)
{
    int iNo = 0;
    BOOL bFlag = TRUE;

    while(Head != NULL)
    {
        iNo = Head->Data;
        bFlag = TRUE;

        if(iNo < 2)
        {
            bFlag = FALSE;
        }

        for(int i = 2; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                bFlag = FALSE;
                break;
            }
        }

        if(bFlag == TRUE)
        {
            printf("%d\t", iNo);
        }
        Head = Head->Next;
    }
    printf("\n");
    return 0;
}

/* 3. Addition of even elements */
int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if((Head->Data % 2) == 0)
        {
            iSum = iSum + Head->Data;
        }
        Head = Head->Next;
    }
    return iSum;
}

/* 4. Second Maximum element */
int SecMaximum(PNODE Head)
{
    int iMax = Head->Data;
    int iSecMax = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iSecMax = iMax;
            iMax = Head->Data;
        }
        else if((Head->Data > iSecMax) && (Head->Data != iMax))
        {
            iSecMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iSecMax;
}

/* 5. Sum of digits of each element */
int SumDigit(PNODE Head)
{
    int iNo = 0, iSum = 0, iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t", iSum);
        Head = Head->Next;
    }
    printf("\n");
    return 0;
}

/* Main Function */
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Perfect numbers are : ");
    DisplayPerfect(First);

    printf("Prime numbers are : ");
    DisplayPrime(First);

    iRet = AdditionEven(First);
    printf("Addition of even elements : %d\n", iRet);

    iRet = SecMaximum(First);
    printf("Second maximum element : %d\n", iRet);

    printf("Sum of digits of elements : ");
    SumDigit(First);

    return 0;
}