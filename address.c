/*#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;  // pointer use 8 bites rather than 4 (int use 4 bites in computer memory)
    printf("%i\n",*p);

}*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
   /* char *s = "HI!";
    printf("%s\n", s);
    printf("%s\n%s\n%s\n%s\n", &s[0],&s[1],&s[2],&s[3]);*/


   char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
    printf("%c\n", *(s + 4));
    printf("%c\n", *(s + 5));
    printf("%c\n", *(s + 6));
    printf("%c\n", *(s + 7));



}
