#include <cs50.h>
#include <stdio.h>

int main(void)
{
  float calls = get_float("calls: ");
  calls = calls + 1;
  calls = calls - 2;
  calls = calls * 3;
  calls = calls / 2;

printf("call is %.1f\n", (calls));
}
