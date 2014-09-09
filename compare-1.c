//completed short in week 4 of cs50x using NULL and char*

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Say something: ");
    char* s = GetString();
    
    printf("Sat something: ");
    char* t = GetString();
    
    if (s != NULL && t != NULL)
    {
        if (strcmp(s, t) == 0)
        {
            printf("You typed the same thing!\n");
        }
        else
        {
            printf("You typed different things!\n");
        }
    }
}
