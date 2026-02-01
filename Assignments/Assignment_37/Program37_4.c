#include <stdio.h>

int LastChar(char *str, char ch)
{
    int index = 0;
    int last = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            last = index;
        }
        str++;
        index++;
    }
    return last;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    getchar();
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}