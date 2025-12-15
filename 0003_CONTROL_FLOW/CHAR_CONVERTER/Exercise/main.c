#include <stdbool.h>
#include <stdio.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    if (character > 47 && character < 58)
    {
        printf("%c is nummeric", character);
    }
    // is upper case
    if (character > 64 && character < 91)
    {
        printf("%c is uppercase", character);
    }
    
    // is lower case
    if (character > 96 && character < 123)
        {
            printf("%c is uppercase", character);
        }
    // is alpha
    if ((character > 64 && character < 91) || (character > 96 && character < 123) || (character > 47 && character < 58))
        {
            printf("%c is alphabetical", character);
        }
    // is alpha numeric
    if ((character > 64 && character < 91) || (character > 96 && character < 123))
        {
            printf("%c is alphanumerical", character);
        }
    // to upper case
    if (character > 96 && character < 123)
        {
            character -= 32;
            printf("%c now upper case", character);
        }
    // to lower case
    if (character > 64 && character < 91)
    {
        character += 32;
        printf("%c now lower case", character);
    }
    return 0;
}