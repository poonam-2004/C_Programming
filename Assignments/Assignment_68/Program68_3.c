////////////////////////////////////////////////////////////////////
//
//  Program Name : Program68_3
//  Description  : Recursive program to display numbers from 5 to 1
//  Input        : None
//  Output       : 5  4  3  2  1
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t", i);
        i--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Output :  5  4  3  2  1
//
////////////////////////////////////////////////////////////////////