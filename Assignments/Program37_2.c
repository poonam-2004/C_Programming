#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}