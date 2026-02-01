#include <stdio.h>

void print_odd_numbers(int limit)
{
    for (int i = 1; i <= limit; i += 2)
    {
        printf("%d ", i);
    }
}

int main()
{
    int limit;
    printf("Enter number: ");
    scanf("%d", &limit);
    print_odd_numbers(limit);
    return 0;
}