///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : SecondMin
// Description   : Finds second minimum element
// Input         : Array, Size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void SecondMin(void *arr, int iSize, void *ans, char type)
{
    int min = *((int*)arr);
    int smin = 2147483647;

    for(int i=0;i<iSize;i++)
    {
        int val = *((int*)arr+i);
        if(val < min)
        {
            smin = min;
            min = val;
        }
        else if(val < smin && val != min)
            smin = val;
    }
    *(int*)ans = smin;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};
    int ret;

    SecondMin(arr,5,&ret,'i');
    printf("%d",ret);

    return 0;
}