#include <cs50.h>
#include <stdio.h>

void print_row(int lenght);
int main(void)

{
    int height = get_int("Height: ");

    for (int i = 0; i < height ;i++)
    {
        print_row(i + 1 );
    }
}
   void print_row(int lenght)
{

   for (int i = 0; i < lenght; i++ )
 {
    printf("#");
  }
  printf("\n");
 }
