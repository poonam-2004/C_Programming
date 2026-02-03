///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Reverse
// Description   : Reverses array elements
// Input         : Array, Size, Element size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Reverse(void *arr, int iSize, int elemSize)
{
    char *start = (char*)arr;
    char *end = (char*)arr + (iSize - 1) * elemSize;
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
    int arr[] = {10,20,30,40,50};

    Reverse(arr,5,sizeof(int));

    for(int i=0;i<5;i++)
        printf("%d\t", arr[i]);

    return 0;
}