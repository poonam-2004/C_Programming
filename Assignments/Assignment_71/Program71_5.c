////////////////////////////////////////////////////////////////////
//
//  Program Name : Program71_5
//  Description  : Recursive program to calculate product of digits
//  Input        : One integer number
//  Output       : Product of digits
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        return (iNo % 10) * Mult(iNo / 10);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Product of digits is : %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : 523
//  Output : 30
//
////////////////////////////////////////////////////////////////////