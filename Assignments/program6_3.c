#include <stdio.h>
#include <stdbool.h>

bool CheckEqual(int Value1, int Value2) 
{
    if (Value1 == Value2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers:\n");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if (bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}