///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////
// Function Name : Search
// Description   : Checks whether given value is present
// Input         : Array, Size, Element size, Value
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
int Search(void *arr, int iSize, int elemSize, void *value)
{
    int i;
    for(i = 0; i < iSize; i++)
    {
        if(memcmp((char*)arr + i*elemSize, value, elemSize) == 0)
            return 1;
    }
    return 0;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};
    int no = 30;

    if(Search(arr,5,sizeof(int),&no))
        printf("Value Found\n");
    else
        printf("Value Not Found\n");

    return 0;
}