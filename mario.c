/**
*
* mario.c
*
* Anna Ganzhul
* annaganzhul.94@gmail.com
*
* problem set1 of CS50
* problem mario
*
*/
 
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    int height;
   
   // Makes sure the input is between 0 and 23 inclusive
    do
    {
        printf("Please enter a value between 0 and 23 inclusive:\n");
        height = GetInt();
    }
    while (height < 0 || height > 23);
  
    // Prints out the pyramid
    for (int row = 0; row < height; row++)
    {  
        for (int spaces = height - row - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }
        
        for (int hashes = 0; hashes < (row + 2); hashes++)
        {
            printf("#");
        }
           
        printf("\n");       
    }
}
