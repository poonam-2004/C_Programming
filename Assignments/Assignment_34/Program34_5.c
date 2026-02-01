#include <stdio.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}