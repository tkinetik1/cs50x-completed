#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    printf("Input: ");
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
    }
    printf("\n");
}
