///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : CheckSorted
// Description   : Checks whether array is sorted
// Input         : Array, Size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
int CheckSorted(void *arr, int iSize, char type)
{
    int i;
    for(i=0;i<iSize-1;i++)
        if(*((int*)arr+i) > *((int*)arr+i+1))
            return 0;
    return 1;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};

    if(CheckSorted(arr,5,'i'))
        printf("Sorted");
    else
        printf("Not Sorted");

    return 0;
}