///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////
// Function Name : CopyArray
// Description   : Copies one array into another
// Input         : Source, Destination, Size, Element size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void CopyArray(void *src, void *dest, int iSize, int elemSize)
{
    int i;
    for(i = 0; i < iSize; i++)
    {
        memcpy((char*)dest + i*elemSize,
               (char*)src  + i*elemSize,
               elemSize);
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};
    int brr[5];

    CopyArray(arr,brr,5,sizeof(int));

    for(int i=0;i<5;i++)
        printf("%d\t",brr[i]);

    return 0;
}

/*
Test Case :
Input  : 10 20 30 40 50
Output : 10 20 30 40 50
*/