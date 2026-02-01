#include <stdio.h>

void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}