////////////////////////////////////////////////////////////////////
//
//  Program Name : Program68_4
//  Description  : Recursive program to display capital alphabets
//  Input        : None
//  Output       : A  B  C  D  E  F
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%c\t", ch);
        ch++;
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
//  Output :  A  B  C  D  E  F
//
////////////////////////////////////////////////////////////////////