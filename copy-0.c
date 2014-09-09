//completed 9/7/14 through cs50x: week 4 (5).

#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Say something: ");
    string s = GetString();
    if (s == NULL)
    {
        return 1;
    }
    
    string t = s;
    
    printf("Capitalizing copy...\n");
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("Original:   %s\n", s);
    printf("Copy:       %s\n", t);
}
