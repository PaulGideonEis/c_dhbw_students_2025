#include <stdio.h>

// Call by Reference function
void printMemoryAddressAndValue(float* value)
{
    printf("\nMemmory Adress: %p \n", value);
    printf("Value: %f \n", *value);
}
// Call by Value function
float addValue(float Value1, float Value2)
{
    return(Value1 + Value2);
}

int main()
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("Enter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}