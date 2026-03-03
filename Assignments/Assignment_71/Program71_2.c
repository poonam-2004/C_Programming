////////////////////////////////////////////////////////////////////
//
//  Program Name : Program71_2
//  Description  : Recursive program which accept number
//                 from user and return largest digit
//  Input        : One integer number
//  Output       : Summation of digits
//  Author       : Poonam Narayan Palkar
//  Date         : 06/02/2026
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Max(int iNo)
{
    int digit = 0;
    int maxDigit = 0;

    if (iNo == 0)
        return 0;

    digit = iNo % 10;         
    maxDigit = Max(iNo / 10); 

    if (digit > maxDigit)
        return digit;
    else
        return maxDigit;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    if(iValue < 0)  
        iValue = -iValue;

    iRet = Max(iValue);

    printf("Largest digit is: %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input  : 56987
//  Output : 9
//
////////////////////////////////////////////////////////////////////