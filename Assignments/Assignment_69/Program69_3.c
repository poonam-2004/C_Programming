////////////////////////////////////////////////////////////////////
//
//  Program Name : Program69_3
//  Description  : Recursive program to display numbers from N to 1
//  Input        : Number
//  Output       : 5  4  3  2  1
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t", iNo);
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
//  Output : 5  4  3  2  1
//
////////////////////////////////////////////////////////////////////