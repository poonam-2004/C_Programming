////////////////////////////////////////////////////////////////////
//
//  Program Name : Program70_1
//  Description  : Recursive program to display pattern
//                 5 * 4 * 3 * 2 * 1 *
//  Input        : One integer number
//  Output       : Pattern display
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t*\t", iNo);
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 5 * 4 * 3 * 2 * 1 *
//
////////////////////////////////////////////////////////////////////