///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Reverse
// Description   : Reverses generic array
// Input         : Generic array, Size, Element size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Reverse(void *arr, int size, int elemSize)
{
    char *start = (char*)arr;
    char *end = (char*)arr + (size - 1) * elemSize;
    char temp;
    int i;

    while(start < end)
    {
        for(i = 0; i < elemSize; i++)
        {
            temp = start[i];
            start[i] = end[i];
            end[i] = temp;
        }
        start += elemSize;
        end -= elemSize;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int i;

    for(i = 0; i < 9; i++)
        printf("%d\t", arr[i]);

    Reverse(arr, 9, sizeof(int));
    printf("\n");

    for(i = 0; i < 9; i++)
        printf("%d\t", arr[i]);

    return 0;
}

/*
Test Case:
Input  : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10
*/