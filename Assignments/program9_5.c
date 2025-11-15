#include <stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1, iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (i = 2; i <= iNo; i += 2)
    {
        iEvenFact = iEvenFact * i;
    }
    for (i = 1; i <= iNo; i += 2)
    {
        iOddFact = iOddFact * i;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}