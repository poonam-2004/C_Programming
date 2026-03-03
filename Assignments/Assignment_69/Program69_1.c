////////////////////////////////////////////////////////////////////
//
//  Program Name : Program69_1
//  Description  : Recursive program to display * using parameter
//  Input        : Number
//  Output       : *  *  *  *  *
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
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
//  Output : *  *  *  *  *
//
////////////////////////////////////////////////////////////////////