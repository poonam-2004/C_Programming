////////////////////////////////////////////////////////////////////
//
//  Program Name : Program70_2
//  Description  : Recursive program to calculate sum of digits
//  Input        : One integer number
//  Output       : Summation of digits
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }
    else
    {
        return (iNo % 10) + Sum(iNo / 10);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Sum of digits is : %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : 879
//  Output : 24
//
////////////////////////////////////////////////////////////////////