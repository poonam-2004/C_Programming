//////////////////////////////////////////////////////////////////
//
// Required Header file
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
// Function Name :     Divide
// Description :       It is used to divide two numbers
// Input :             Integer
// Output :            Integer
// Author :            Poonam Narayan Palkar     
// Date :              15/10/2025
//
//////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

//////////////////////////////////////////////////////////////////
//
// Entry point function of the application
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d",iRet);

    return 0;
}