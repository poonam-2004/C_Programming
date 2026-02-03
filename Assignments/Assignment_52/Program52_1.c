///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Multiply
// Description   : Performs multiplication of two numbers
// Input         : Two values, Answer pointer, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Multiply(void *no1, void *no2, void *ans, char type)
{
    if(type == 'i')
        *(int*)ans = (*(int*)no1) * (*(int*)no2);
    else if(type == 'f')
        *(float*)ans = (*(float*)no1) * (*(float*)no2);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a = 10, b = 20, iRet;
    float x = 10.0f, y = 20.0f, fRet;

    Multiply(&a, &b, &iRet, 'i');
    printf("%d\n", iRet);

    Multiply(&x, &y, &fRet, 'f');
    printf("%f\n", fRet);

    return 0;
}