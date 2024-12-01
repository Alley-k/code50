#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
   char *s = get_string("s: ");
   char *t = get_string("t: ");

  /* if(s == t)
   {
    printf("Same\n");

   }
   else
   {
    printf("Differnt\n");
   }*/

 // Noticing that typing in HI! for both strings still results in the output of Different.
//the code for scompare.c above is actually attempting to see if the memory addresses are different: not the strings themselve

/* if (strcmp(s, t) == 0)
 {
    printf("Same\n");
 }
 else
 {
    printf("different\n");
 }*/
    printf("%p\n", s);
    printf("%p\n", t);

}
