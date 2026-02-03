///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Sub
// Description   : Performs subtraction of two numbers
// Input         : Two numbers, Answer variable, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Sub(void *no1, void *no2, void *ans, char type)
{
    if(type == 'i')
        *(int*)ans = *(int*)no1 - *(int*)no2;
    else if(type == 'f')
        *(float*)ans = *(float*)no1 - *(float*)no2;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a = 30, b = 10, iRet;
    float x = 20.5f, y = 10.2f, fRet;

    Sub(&a, &b, &iRet, 'i');
    printf("%d\n", iRet);

    Sub(&x, &y, &fRet, 'f');
    printf("%f\n", fRet);

    return 0;
}