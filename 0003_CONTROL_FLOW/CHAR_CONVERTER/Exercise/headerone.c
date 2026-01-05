#include <stdbool.h>
#include <stdio.h>

    bool Is_Numeric(char character){
    if (character > 47 && character < 58)
    {
        printf("\n%c is nummeric", character);
    }}
    bool Is_Upper_Case(char character){
    if (character > 64 && character < 91)
    {
        printf("\n%c is uppercase", character);
    }}

    bool Is_Lower_Case(char character){
    if (character > 96 && character < 123)
        {
            printf("\n%c is lowercase", character);
        }}
    bool Is_Alpha(char character){
    if ((character > 64 && character < 91) || (character > 96 && character < 123) || (character > 47 && character < 58))
        {
            printf("\n%c is alphabetical", character);
        }}
    bool Is_Alpha_Numeric(char character){
    if ((character > 64 && character < 91) || (character > 96 && character < 123))
        {
            printf("\n%c is alphanumerical", character);
        }}
    bool To_Upper_Case(char character){
    if (character > 96 && character < 123)
        {
            character -= 32;
            printf("\n%c now uppercase", character);
        }}
    bool ToLowerCase(char character){
    if (character > 64 && character < 91)
    {
        character += 32;
        printf("\n%c now lowercase", character);
    }}

