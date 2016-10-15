/**
*
* water.c
*
* Anna Ganzhul
* annaganzhul.94@gmail.com
*
* problem set1 of CS50
* problem water
*
*/
 
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    // get user input on length of shower
    printf("How many minutes do you take a shower? ");
    int m = GetInt();
    
    // determine how long the person take a shower
    if (m > 0)
    {
        printf("Minutes: %i\n", m);
    }
    else if (m < 0)
    {
        printf("invaid answer\n");
    }
    else if (m == 0)
    {
        printf("You don't shower!\n");
    }
    
    // ma
    int b = (m*12);
    printf("Bottles: %i\n", b);
}
