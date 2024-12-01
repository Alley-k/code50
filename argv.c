#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main( int argc, string argv[])
{
    if (argc != 2)
    {
        printf("usage: ./mario number\n");
        return 1;
    }
    // atoi function is in stdlib.h (standard liberary) to convert any string to intrger.
    int height = atoi(argv[1]);

}
