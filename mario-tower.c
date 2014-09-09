//cs50x C Problem Set 1 - Tyson Frederick - 7/29/14 (last update)

#include <stdio.h>
#include <cs50.h>

int main (void)
{
        
    int x;
    
    do
    {
        printf("Pshh.. Pyramid Height?\n");        
        x = GetInt();
    }
    
    while ( x>23 || x<0 );
        
    if (x== 1)
    {
        printf("##\n");
    }
    
    else if (x > 1)
    {
        // calculates how many lines in relation to x; x = linecount. number of lines.
        int lines;
        
        //each for loop of lines = 1 line.
        for (lines = 0; lines < x; lines++)
        {
            // calculates and prints spaces per line.  per line, add 1 space starting at x = 1, go until spaces = spaces + 1.  i.e. one line (linecount 1). 
            int spaces;
            
            for (spaces = lines; x > (spaces + 1); spaces++)
            {
                printf(" ");
            }
            
            // calculates how many pound symbols are needed in relation to x = linenum (height in lines).
            int blocks;
            
            for (blocks = lines; blocks + 2 > 0; blocks--)
            {
                printf("#");
            }
            
            // "\n" creates a new line.
            printf("\n");
        }
        
    // exit program.
    }
    return 0;
}
