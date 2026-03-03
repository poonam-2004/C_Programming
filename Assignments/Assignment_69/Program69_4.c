////////////////////////////////////////////////////////////////////
//
//  Program Name : Program69_4
//  Description  : Recursive program to display capital alphabets
//  Input        : Number
//  Output       : A  B  C  D  E  
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'A';

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
//  Output : A  B  C  D  E  F
//
////////////////////////////////////////////////////////////////////