#include <stdio.h>

int sum_of_even_factors(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0 && i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of even factors (excluding number): %d\n", sum_of_even_factors(number));
    return 0;
}