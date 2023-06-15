#include <cs50.h>
#include <stdio.h>

int get_startSize(void);
int get_endSize(int startSize);
int get_year(int startSize, int endSize);

int main(void)
{
    // TODO: Prompt for start size
    int startSize = get_startSize();
    // TODO: Prompt for end size
    int endSize = get_endSize(startSize);
    // TODO: Calculate number of years until we reach threshold
    int year = get_year(startSize, endSize);
    // TODO: Print number of years
    printf("Years: %i\n", year);
}

int get_startSize(void)
{
    int startSize;
    // Keeps promping start size until input is larger than 9
    do
    {
        startSize = get_int("Start Size: ");
    }
    while (startSize < 9);
    return startSize;
}

int get_endSize(int startSize)
{
    int endSize;
    // Keeps promping start size until input is larger than start size
    do
    {
        endSize = get_int("End Size: ");
    }
    while (endSize < startSize);
    return endSize;
}

int get_year(int startSize, int endSize)
{
    int year = 0;
    // handle start size equals to end size
    if (startSize == endSize)
    {
        return year;
    }
    int population = startSize;
    // calculate population until reach end size
    do
    {
        population = (int)population + (int)population / 3 - (int)population / 4;
        year++;
    }
    while (population < endSize);
    return year;
}