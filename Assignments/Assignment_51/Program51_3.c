///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////
// Function Name : SearchFirst
// Description   : Returns first occurrence position
// Input         : Generic array, Size, Element size, Value
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
int SearchFirst(void *arr, int size, int elemSize, void *value)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(memcmp((char*)arr + i * elemSize, value, elemSize) == 0)
            return i + 1;
    }
    return -1;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int no = 40;

    int ret = SearchFirst(arr, 9, sizeof(int), &no);
    printf("%d\n", ret);

    return 0;
}

/*
Test Case:
Input  : 40
Output : 6
*/