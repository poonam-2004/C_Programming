#include <stdio.h>

int FindLargest(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);
    printf("Largest number is: %d\n", result);

    return 0;
}