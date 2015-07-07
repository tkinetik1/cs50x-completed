// Tyson Frederick - cs50x's Problem Set 2 - 7/29/14 (final push)

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

void isall(int c)
    {
    
        if ((isspace(c)) || (isdigit(c))|| (ispunct(c)) || (iscntrl(c)))
        {
            printf("%c", c);
        }
        
    }
    
int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caeser2 key");
        return 1;
    }
    
    int k = atoi(argv[1]);
    printf("string please:\n");
    string s = GetString();
        
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        isall(s[i]);
	if ((isupper(s[i])))
	{   
	    if ((isupper(s[i] + k)))
	    {
	        printf("%c", (s[i] + k));
	    }
	    
	    else
	    {
	        printf("%c", ((((s[i] + k) - 65) % 26)+ 65));
	    }
	}
	    
	if ((islower(s[i])))
	{
	    if ((islower(s[i] + k)))
	    {
	        printf("%c", (s[i] + k));
	    }
	    
	    else
	    {
	        printf("%c", ((((s[i] + k) - 97) % 26)+ 97));
	    }
        }
        
    }
    
    printf("\n");
    return 0;
}
