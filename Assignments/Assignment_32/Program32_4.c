#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    int mid = iCol/2;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
                printf("*\t");
            else if(j < i && j <= mid)
                printf("#\t");
            else if(j > i && j > mid)
                printf("$\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}