#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Input;
    int Temp;
    int Sum;
    int* MyArray = NULL;

    printf("Enter the number of elements: ");
    scanf("%i", &Input);
    if (Input > 0)
    {
        MyArray = (int*) malloc(Input * (int) sizeof(int));
        if (MyArray == NULL)
        {
            printf("Memory allocation failed!");
        }


        printf("Enter %i integers:\n", Input);
        Sum = 0;
        for (int i = 0; i < Input; i++)
        {
            scanf("%i", &Temp);
            MyArray[i] = Temp;
            Sum += Temp;
        }
        printf("Summe der Elemente: %i", Sum);
    }

    else
    {
        printf("Invalid input! The number of elements must be greater than zero.");
    }

    free(MyArray);
    MyArray = NULL;

    return(0);
}
