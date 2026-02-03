///////////////////////////////////////////////////////////
// Required Header Files :
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Swap
// Description   : Swaps two variables of any data type
// Input         : Two variables, Size of data type
// Author        : Poonam Narayan Palkar
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Swap(void *no1, void *no2, int size)
{
    char temp;
    char *a = (char*)no1;
    char *b = (char*)no2;

    for(int i = 0; i < size; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int a = 10, b = 20;
    float x = 3.5f, y = 7.8f;

    Swap(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    Swap(&x, &y, sizeof(float));
    printf("%f %f\n", x, y);

    return 0;
}    