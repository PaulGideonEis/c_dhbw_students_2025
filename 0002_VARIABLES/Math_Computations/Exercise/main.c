#include <stdio.h>

int main()
{
    int x = -2;
    int y = -3;
    int z1, z2, z3;

    z1 = x^2 + y^2 - (x * y) + 2;
    z2 = (x - y)^3 - 3;
    z3 = (2 * x^3 - (1/2) * x^2 - x + 4) / y;

    printf("%d \n%d \n%d",z1,z2,z3);

    return 0;
}
















