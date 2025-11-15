#include <stdio.h>

int KMtoMeter(int iValue)
{
    int iResult = 0;
    iResult = iValue * 1000;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometers: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is: %d\n", iRet);

    return 0;
}