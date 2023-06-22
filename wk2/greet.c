#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // string name = get_string("What's your name? ");
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}