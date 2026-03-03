////////////////////////////////////////////////////////////////////
//
//  Program Name : Program71_3
//  Description  : Recursive program to calculate string length
//  Input        : String
//  Output       : Length of string
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + Strlen(str + 1);
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("Length of string is : %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : Hello
//  Output : 5
//
////////////////////////////////////////////////////////////////////