#include <stdio.h>

void print_factors(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    print_factors(number);
    
    return 0;
}