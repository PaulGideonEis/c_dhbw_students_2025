#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float milliseconds = 0.0F;

    printf("Please enter a millisecond value: ");
    scanf("%f", &milliseconds);

//    srand(time(NULL));
//    milliseconds = rand() % 1000000000;

    float seconds = milliseconds /1000.0f;
    float minutes = seconds / 60.0f;
    float hours = minutes / 60.0f;
    float days = hours / 24.0f;

    printf("\nmilliseconds: %f\n", seconds);
    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}
