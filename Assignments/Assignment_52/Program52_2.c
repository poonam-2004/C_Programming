///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Max3
// Description   : Finds maximum of three numbers
// Input         : Three values, Answer pointer, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Max3(void *a, void *b, void *c, void *ans, char type)
{
    if(type == 'i')
    {
        int max = *(int*)a;
        if(*(int*)b > max) max = *(int*)b;
        if(*(int*)c > max) max = *(int*)c;
        *(int*)ans = max;
    }
    else if(type == 'f')
    {
        float max = *(float*)a;
        if(*(float*)b > max) max = *(float*)b;
        if(*(float*)c > max) max = *(float*)c;
        *(float*)ans = max;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a = 10, b = 20, c = 15, iRet;
    float x = 3.5, y = 9.8, z = 7.1, fRet;

    Max3(&a, &b, &c, &iRet, 'i');
    printf("%d\n", iRet);

    Max3(&x, &y, &z, &fRet, 'f');
    printf("%f\n", fRet);

    return 0;
}