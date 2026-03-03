////////////////////////////////////////////////////////////////////
//
//  Program Name : Program68_2
//  Description  : Recursive program to display numbers from 1 to 5
//  Input        : None
//  Output       : 1  2  3  4  5
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("%d\t", i);
        i++;
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
//  Output :  1  2  3  4  5
//
////////////////////////////////////////////////////////////////////