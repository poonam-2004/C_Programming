///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Div
// Description   : Performs division of two numbers
// Input         : Two numbers, Answer variable, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Div(void *no1, void *no2, void *ans, char type)
{
    if(type == 'i')
    {
        if(*(int*)no2 != 0)
            *(int*)ans = *(int*)no1 / *(int*)no2;
    }
    else if(type == 'f')
    {
        if(*(float*)no2 != 0.0f)
            *(float*)ans = *(float*)no1 / *(float*)no2;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a = 20, b = 4, iRet;
    float x = 20.0f, y = 4.0f, fRet;

    Div(&a, &b, &iRet, 'i');
    printf("%d\n", iRet);

    Div(&x, &y, &fRet, 'f');
    printf("%f\n", fRet);

    return 0;
}