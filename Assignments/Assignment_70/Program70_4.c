////////////////////////////////////////////////////////////////////
//
//  Program Name : Program70_4
//  Description  : Recursive program to calculate factorial
//  Input        : One integer number
//  Output       : Factorial
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Fact(int iNo)
{
    if(iNo <= 1)
    {
        return 1;
    }
    else
    {
        return iNo * Fact(iNo - 1);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial is : %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : 5
//  Output : 120
//
////////////////////////////////////////////////////////////////////