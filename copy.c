#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
       return 1;
    }
    char *t = malloc(strlen(s) + 1 );
    if( t == NULL)
    {
         return 1;
    }

    for (int i = 0, n = strlen(s) ; i <= n; i++)
    {
      t[i] =s[i];
    }
    if (strlen(t) > 0)
    {
    t[0] = toupper(t[0]);
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);
//Notice that string t = s copies the address of s to t. This does not accomplish what we are desiring. The string is not copied – only the address is.
}
