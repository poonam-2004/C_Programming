#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int number)
{
    return (number % 5 == 0);
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (is_divisible_by_five(number))
        printf("Yes, divisible by 5\n");
    else
        printf("No, not divisible by 5\n");

    return 0;
}