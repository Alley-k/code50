#include <stdio.h>
#include <cs50.h>

int fact(int n)
{
    if( n == 1 || n == 0)
      return 1;
    else
        return n*fact(n-1);
 }

 int main(void)
 {
    int number = get_int("Enter a number: " );
    printf("Factrioal of %i is %i\n", number , fact(number));
    return 0;
 }
