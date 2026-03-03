////////////////////////////////////////////////////////////////////
//
//  Program Name : Program68_1
//  Description  : Recursive program to display * five times
//  Input        : None
//  Output       : *  *  *  *  *
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
        printf("*\t");
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
//  Output :  *  *  *  *  *
//
////////////////////////////////////////////////////////////////////