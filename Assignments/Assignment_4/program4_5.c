#include <stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}