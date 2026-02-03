///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Add
// Description   : Performs addition of two numbers
// Input         : Two numbers, Answer variable, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Add(void *no1, void *no2, void *ans, char type)
{
    if(type == 'i')
        *(int*)ans = *(int*)no1 + *(int*)no2;
    else if(type == 'f')
        *(float*)ans = *(float*)no1 + *(float*)no2;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a = 10, b = 20, iRet;
    float x = 10.5f, y = 20.3f, fRet;

    Add(&a, &b, &iRet, 'i');
    printf("%d\n", iRet);

    Add(&x, &y, &fRet, 'f');
    printf("%f\n", fRet);

    return 0;
}