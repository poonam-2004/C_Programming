#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting point: ");
    scanf("%d", &iStart);

    printf("Enter the ending point: ");
    scanf("%d", &iEnd);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Numbers in range are:\n");
    Range(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}