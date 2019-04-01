#include <stdio.h> //libraries
#include <cs50.h>
#include <math.h>

int main (void)
{
    int year; //declaring integer year
    do
    {
        year = get_int("What year after 0 A.D. do you want to check for being a leap year: "); //asking year value
        printf("\n");
    }
    while (year <= 0); //makes sure year greater than 0 is used as the input

    //help sort between 'true' or 'false'.

    bool condition1 = (year % 4) == 0; //true value, also says a leap year must be divisible by 4
    bool condition2 = (year % 100) != 0; //declaring bool value of true, also leap year can't be divisible by 100

    if(condition1 && condition2) //if condition1 and condition2 are true... property of '&&'
    {
        printf("%d is a leap year!\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0; //exits code safely

}