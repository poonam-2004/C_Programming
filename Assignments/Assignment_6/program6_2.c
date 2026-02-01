#include <stdio.h>
#include <stdbool.h>

bool CheckGreater(int Value) 
{
    if (Value > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number:\n");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if (bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}