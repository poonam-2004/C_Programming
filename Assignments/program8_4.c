#include <stdio.h>

void Table(int iNo)
{
    int i = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}