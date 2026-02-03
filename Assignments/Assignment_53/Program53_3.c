///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : SecondMax
// Description   : Finds second maximum element
// Input         : Array, Size
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void SecondMax(void *arr, int iSize, void *ans, char type)
{
    int max = *((int*)arr);
    int smax = -2147483648;

    for(int i=0;i<iSize;i++)
    {
        int val = *((int*)arr+i);
        if(val > max)
        {
            smax = max;
            max = val;
        }
        else if(val > smax && val != max)
            smax = val;
    }
    *(int*)ans = smax;
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};
    int ret;

    SecondMax(arr,5,&ret,'i');
    printf("%d",ret);

    return 0;
}