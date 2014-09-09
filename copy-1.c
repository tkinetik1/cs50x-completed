//completed by Tyson Frederick through cs50x week 4 lecture cont.

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Say something: ");
    char* s = GetString();
    if (s == NULL)
    {
        return 1;
    }
    
    char* t = malloc((strlen(s) + 1) * sizeof(char));
    if (t == NULL)
    {
        return 1;
    }
    
    int n = strlen(s);
    for (int i = 0; i <= n; i++)
    {
        t[i] = s[i];
    }
    
    // capitalize copy through pointer *t to pointer *s which changes the value or character of whatever s[i] is pointing to.
    printf("Capitalizing copy...\n");
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("Original:   %s\n", s);
    printf("Copy:       %s\n", t);
    
    // success
    return 0;
    
}
