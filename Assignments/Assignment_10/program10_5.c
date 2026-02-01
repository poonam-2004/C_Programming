#include <stdio.h>

double SquareMeter(int iValue)
{
    double SquareM = 0.0;
    SquareM = iValue * 0.0929;
    return SquareM;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %lf\n", dRet);

    return 0;
}