#include <stdio.h>

int main()
{
    int aValue = 42;
    int* myPointer = NULL;
    myPointer = &aValue;
    int* yourPointer = NULL;
    yourPointer = myPointer;

    printf("%i \n", *myPointer);
    *myPointer = 20;
    printf("%i \n", *myPointer);

    *yourPointer = 42;
    printf("%i \n", *myPointer);
    printf("%p == %p  \n", &myPointer, &yourPointer);

    return 0;
}