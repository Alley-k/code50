#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = 5;
    int seq[size];

    seq[0] = 1;
    printf("%i\n", seq[0]);

    for (int i = 1; i < size; i++)
    {
        seq[i] = seq[i - 1] * 2;
        printf("%i\n", seq[i]);

    }
     printf("\n");
}
