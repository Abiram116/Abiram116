#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include<ctype.h>
#include<strings.h>
int main(){
    /*
*--------------------------------------------------------------------*
    <ctype.h>
    1. islower() -> return true for lower case 
    2. isupper() -> return true for upper case
    3. isdigit() -> return true for digits
    4. tolower() -> UpperCase to LowerCase
    5. toupper() -> LowerCase to UpperCase
    6. isspace() -> return true for spaces
    7. isalnum() -> gives Alpha-Numeric
    8. isalpha() -> return true for aplphabets
    9. isxdigit() -> return true for hexadecimal digit
*---------------------------------------------------------------------*
    <string.h>
    1. strlen() -> lenght of the string excluding null charecter
    2. strcpy() -> copy one string values to another string
    3. strncpy() ->
    4. strcmp() -> comparing two strings wether they are equal or not
    5. strncmp() ->
    6. strcat() -> add one string to another string
    7. strncat() ->
    8. strrev() -> 
*---------------------------------------------------------------------*
    
*/
// test wether the lenght of the given username is even(display butiful) or odd(fabules)
// test wether the given string is palendrome or not
char a[50],b[50];
printf("Enter your name: ");
scanf(" %[^\n]s",a);
printf("enter your family name: ");
scanf(" %[^\n]s",b);

    return 0;
}