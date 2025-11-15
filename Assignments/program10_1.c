#include <stdio.h>

double CircleArea(float Radius)
{
    double Area = 0.0;
    Area = 3.14 * Radius * Radius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}