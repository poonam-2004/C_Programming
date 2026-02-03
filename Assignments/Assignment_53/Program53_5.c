///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Replace
// Description   : Replaces old value with new value
// Input         : Array, Size, Old value, New value
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Replace(void *arr, int iSize, void *oldVal, void *newVal, char type)
{
    for(int i=0;i<iSize;i++)
        if(*((int*)arr+i) == *(int*)oldVal)
            *((int*)arr+i) = *(int*)newVal;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,10,30,10};
    int oldVal = 10, newVal = 99;

    Replace(arr,5,&oldVal,&newVal,'i');

    for(int i=0;i<5;i++)
        printf("%d\t",arr[i]);

    return 0;
}