///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : AddN
// Description   : Adds N elements of an array
// Input         : Generic array, Size, Element size, Data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void AddN(void *arr, int size, int elemSize, void *ans, char type)
{
    int i;
    if(type == 'i')
    {
        int sum = 0;
        for(i = 0; i < size; i++)
            sum += *((int*)arr + i);
        *(int*)ans = sum;
    }
    else if(type == 'f')
    {
        float sum = 0;
        for(i = 0; i < size; i++)
            sum += *((float*)arr + i);
        *(float*)ans = sum;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iSum;
    float fSum;

    AddN(arr, 5, sizeof(int), &iSum, 'i');
    printf("%d\n", iSum);

    AddN(brr, 4, sizeof(float), &fSum, 'f');
    printf("%f\n", fSum);

    return 0;
}