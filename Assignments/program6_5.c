#include <stdio.h>

float Percentage(int Total, int Obtained) 
{
    if (Obtained == 0)
    {
        return 0.0;
    }

    return ((float)Obtained / (float)Total) * 100;
}

int main() 
{
    int iTotal = 0, iObtained = 0;
    float fRet = 0.0;

    printf("Please enter total marks:\n");
    scanf("%d", &iTotal);

    printf("Please enter obtained marks:\n");
    scanf("%d", &iObtained);

    fRet = Percentage(iTotal, iObtained);

    printf("Percentage is: %.2f%%", fRet);

    return 0;
}