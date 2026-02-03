///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Max4
// Description   : Finds maximum among four numbers
// Input         : Four numbers, Answer variable, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Max4(void *a, void *b, void *c, void *d, void *ans, char type)
{
    if(type == 'i')
    {
        int max = *(int*)a;
        if(*(int*)b > max) max = *(int*)b;
        if(*(int*)c > max) max = *(int*)c;
        if(*(int*)d > max) max = *(int*)d;
        *(int*)ans = max;
    }
    else if(type == 'f')
    {
        float max = *(float*)a;
        if(*(float*)b > max) max = *(float*)b;
        if(*(float*)c > max) max = *(float*)c;
        if(*(float*)d > max) max = *(float*)d;
        *(float*)ans = max;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a=10,b=40,c=20,d=30,iRet;
    float x=3.5f,y=7.8f,z=2.1f,w=6.4f,fRet;

    Max4(&a,&b,&c,&d,&iRet,'i');
    printf("%d\n", iRet);

    Max4(&x,&y,&z,&w,&fRet,'f');
    printf("%f\n", fRet);

    return 0;
}