#include <stdio.h>

void print_even_numbers(int limit)
{
    for (int i = 2; i <= limit; i += 2)
    {
        printf("%d ", i);
    }
}

int main()
{
    int limit;
    printf("Enter number: ");
    scanf("%d", &limit);
    print_even_numbers(limit);
    return 0;
}