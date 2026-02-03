///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////
// Function Name : Frequency
// Description   : Counts frequency of given element
// Input         : Generic array, Size, Element size, Value
// Author        : Sakshi Jadhav
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
int Frequency(void *arr, int size, int elemSize, void *value)
{
    int i, count = 0;

    for(i = 0; i < size; i++)
    {
        if(memcmp((char*)arr + i * elemSize, value, elemSize) == 0)
            count++;
    }
    return count;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int no = 10;

    int ret = Frequency(arr, 9, sizeof(int), &no);
    printf("%d\n", ret);

    return 0;
}

/*
Test Case:
Input  : 10
Output : 4
*/