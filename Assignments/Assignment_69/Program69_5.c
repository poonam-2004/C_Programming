////////////////////////////////////////////////////////////////////
//
//  Program Name : Program69_5
//  Description  : Recursive program to display small alphabets
//  Input        : Number
//  Output       : a  b  c  d  e  f
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo > 0)
    {
        printf("%c\t", ch);
        ch++;
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
//  Input  : 6
//  Output : a  b  c  d  e  f
//
////////////////////////////////////////////////////////////////////