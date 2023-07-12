#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int n = 50;
    // int *p = &n; // * => pointer called p, instructs the compiler to go to a location in memory
    // printf("%p\n", p); // & provides the address of sth stored in memory
    string s = "HI!"; // char *s, in cs50: typedef char *string;
    printf("%s\n", s);
}

// pointer: 8 bytes
// int: 4 bytes