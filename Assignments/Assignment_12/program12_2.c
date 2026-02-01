#include <stdio.h>

int count_factors(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Total factors: %d\n", count_factors(number));
    return 0;
}