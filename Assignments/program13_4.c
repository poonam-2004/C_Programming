#include <stdio.h>

int sum_natural_numbers(int limit)
{
    int sum = 0;
    for (int i = 1; i <= limit; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int limit;
    printf("Enter number: ");
    scanf("%d", &limit);
    printf("Sum = %d\n", sum_natural_numbers(limit));
    return 0;
}