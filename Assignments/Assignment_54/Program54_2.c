///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : SumEven
// Description   : Calculates sum of even elements
// Input         : Integer array, Size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
int SumEven(void *arr, int iSize)
{
    int i, sum = 0;

    for(i = 0; i < iSize; i++)
    {
        if(*((int*)arr + i) % 2 == 0)
            sum += *((int*)arr + i);
    }
    return sum;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,15,20,25,30};

    int ret = SumEven(arr,5);
    printf("%d", ret);

    return 0;
}