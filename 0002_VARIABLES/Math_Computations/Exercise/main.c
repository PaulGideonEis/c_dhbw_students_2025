#include <stdio.h>
#include <math.h>

int main()
{
    const int x = -2;
    const int y = -3;
    int z1, z2, z3;

    z1 = (x*x) + (y*y) - (x * y) + 2;
    z2 = ((x-y)*(x-y)*(x-y)) - 3;
    z3 = (2 * (x*x*x) - (0.5) * (x*x) - x + 4) / y;

    printf("%d \n%d \n%d",z1,z2,z3);

    return 0;
}
















