///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Min
// Description   : Finds minimum element in array
// Input         : Integer array, Size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
int Min(void *arr, int iSize)
{
    int i;
    int min = *((int*)arr);

    for(i = 1; i < iSize; i++)
    {
        if(*((int*)arr + i) < min)
            min = *((int*)arr + i);
    }
    return min;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,5,40,50};

    int ret = Min(arr,5);
    printf("%d", ret);

    return 0;
}