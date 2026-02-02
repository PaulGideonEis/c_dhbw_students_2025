#include <stdint.h>
#include <stdio.h>

#include "AdConstants.h"
#include "AdFunctions.h"
//#include "AdTypes.h"

void printScene(float speedInMPS, uint32_t laneIDX)
{
    printf("Speed: %f", speedInMPS);
    printf("  L   C   R  \n");
    if (laneIDX == 1)
    {
        printf("| V |   |   |");
    }
    else if (laneIDX == 2)
    {
        printf("|   | V |   |");
    }
    else if (laneIDX == 3)
    {
        printf("|   |   | V |");
    }
    else
    {
        printf("|   |   |   |");
    }
    printf("\n");

}

void getUserInput(float *speedInMPS, uint32_t *laneIDX)
{
    char LongAction = 0;
    char LateralAction = 0;

    printf("LongAction (w=Increase, s=Decrease): ");
    scanf("\n%c", &LongAction);
    printf("LateralAction (a=Left, d=Right): ");
    scanf("\n%c", &LateralAction);

    handleLateralUserInput(laneIDX, LateralAction);
    handleLongitudinalUserInput(speedInMPS, LongAction);
}

void handleLateralUserInput(uint32_t *laneIDX, char lateralAction)
{
    if (lateralAction == 'a')
    {
        *laneIDX = ((*laneIDX - 1) %3);
    }
    if (lateralAction == 'd')
    {
        *laneIDX = ((*laneIDX + 1) % 3);
    }
}

void handleLongitudinalUserInput(float *speedInMPS, char longAction)
{
    if (longAction == 'w')
    {
        *speedInMPS = *speedInMPS * 1.05;
    }
    if (longAction == 's')
    {
        *speedInMPS = *speedInMPS / 1.05;
    }
}
