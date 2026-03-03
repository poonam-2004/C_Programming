////////////////////////////////////////////////////////////////////
//
//  Program Name : Program69_2
//  Description  : Recursive program to display numbers from 1 to N
//  Input        : Number
//  Output       : 1  2  3  4  5
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        Display(iNo - 1);
        printf("%d\t", iNo);
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
//  Output : 1  2  3  4  5
//
////////////////////////////////////////////////////////////////////