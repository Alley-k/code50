#include <stdio.h>
#include <cs50.h>

int add (int x, int y);


int main(void)
{
   int x = get_int ("first no. : ");
   int y = get_int ("second no. : ");

   int z = add (x,y);

   printf("%i\n",z);

}

int add (int x, int y)

{

    return x + y  ;
}
