#include <cs50.h>
#include <stdio.h>

int main(void)

{
   const int N = 3;
   int score [N];
   for(int i = 0; i < N; i++)
   {
     score[i] = get_int("score: ");
   }


    printf("Average:  %.2f\n", (score [0] + score [1] + score [2] ) / (float) N);
}