////////////////////////////////////////////////////////////////////
//
//  Program Name : Program68_5
//  Description  : Recursive program to display small alphabets
//  Input        : None
//  Output       : a  b  c  d  e  f
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
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
//  Output :  a  b  c  d  e  f
//
////////////////////////////////////////////////////////////////////