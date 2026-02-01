#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        return -1;   
    }

    int iCnt = 0, iSum = 0;

    for(iCnt = iStart; (iCnt <= iEnd); iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    return 0;
}