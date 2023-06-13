#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    // float z = (float) x / (float) y; // type casting to avoid truncation-> (float):convert to float
    double z = (double) x / (double) y;

    printf("%.20f\n", z); // floating-point imprecision -> %.20f: show 20 decimal places
}