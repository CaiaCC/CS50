#include <stdio.h>
#include <cs50.h>

const int N = 3;
float average(int length, int array[]);

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;
    int scores[N];
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores)); // at least 1 number on the right is a floating point number || use type casting
}


float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}