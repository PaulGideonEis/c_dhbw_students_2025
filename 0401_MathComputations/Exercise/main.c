#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
    // TODO: Part 1 - Calculate Pi
    int numIterations = 10000;
    double piCalculated = 0;
    double piDecimalPlaces20 = 0;

    for (size_t k = 0; k < numIterations; k++)
    {
        piCalculated += ((double) 1/((4*k)+1)) - ((double) 1/((4*k)+3));
    }
    piCalculated = piCalculated * 4;
    size_t k = 0;

    printf("number of iterations: %u\n", numIterations);
    printf("pi (calculated with approximation):\t%.20lf\n", piCalculated);
    printf("pi (correct on 20 decimal places):\t%.20lf\n\n", piDecimalPlaces20);

    // TODO: Part 2 - Decimal to Binary

    int Decimal = 5000;
    int Bit;
    int Approx = 1;

    printf("Binary Value: ");

    while (Decimal >= pow(2,Approx))
    {
        Approx++;
    }
    int Bits[Approx];
    int i = Approx;
    while (Decimal > 0)
    {
        Bit = Decimal % 2;
        Decimal = Decimal / 2;

        Bits[i-1] = Bit;
        i--;
    }
    for (size_t i = 0; i < Approx; i++)
    {
        printf("%i", Bits[i]);
    }


    return 0;
}
