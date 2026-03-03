////////////////////////////////////////////////////////////////////
//
//  Program Name : Program71_1
//  Description  : recursive program which accept string from
//                 user and count white spaces
//  Input        : One String
//  Output       : count white spaces in that string
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

int WhiteSpace(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }

    if (*str == ' ')
    {
        return 1 + WhiteSpace(str + 1);
    }
    else
    {
        return WhiteSpace(str + 1);
    }
}

int main()
{
    char str[100];
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    count = WhiteSpace(str);

    printf("Number of white spaces: %d\n", count);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : Hell o Wor ld
//  Output : 3
//
////////////////////////////////////////////////////////////////////