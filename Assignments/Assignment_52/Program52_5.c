///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Min
// Description   : Finds minimum element from array
// Input         : Generic array, Size, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Min(void *arr, int size, void *ans, char type)
{
    int i;
    if(type == 'i')
    {
        int min = *((int*)arr);
        for(i = 1; i < size; i++)
            if(*((int*)arr + i) < min)
                min = *((int*)arr + i);
        *(int*)ans = min;
    }
    else if(type == 'f')
    {
        float min = *((float*)arr);
        for(i = 1; i < size; i++)
            if(*((float*)arr + i) < min)
                min = *((float*)arr + i);
        *(float*)ans = min;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iRet;
    float fRet;

    Min(arr, 5, &iRet, 'i');
    printf("%d\n", iRet);

    Min(brr, 4, &fRet, 'f');
    printf("%f\n", fRet);

    return 0;
}