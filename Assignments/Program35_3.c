#include <stdio.h>

int Difference(char *str)
{
    int small = 0, capital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            small++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            capital++;
        }
        str++;
    }

    return small - capital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}