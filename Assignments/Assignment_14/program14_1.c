#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    // If number is negative, make it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop until number becomes zero
    while(iNo != 0)
    {
        iDigit = iNo % 10;      // Extract last digit
        printf("%d\n", iDigit); // Print the digit
        iNo = iNo / 10;         // Remove last digit
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}