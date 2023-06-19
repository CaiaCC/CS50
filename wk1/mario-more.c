#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_payramids(int height);
int max_height = 8;
int min_height = 1;

int main(void)
{
    // keep promping height until the input is between 1 and 8
    int height = get_height();
    // print pyramids
    print_payramids(height);

}

int get_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < min_height || height > max_height || !height);
    return height;
}

void print_payramids(int height)
{
    for (int i = 1; i <= height  ; i++)
    {
        int length = height + 2 + i;
        for (int j = 1; j <= length; j++)
        {
            if (j <= (height - i) || j == height + 1  || j == height + 2)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
         printf("\n");
    }
}
