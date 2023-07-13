// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    int n = 50;
    int *p = &n; // * => pointer called p, instructs the compiler to go to a location in memory
    printf("%i\n", *p); // & provides the address of sth stored in memory
    */
    char *s = "HI!"; // char *s, in cs50: typedef char *string;
    printf("%s\n", s);
    printf("%p\n", &s[0]); // line 12 and 13 are printing the same thing
    printf("%s\n", s);
    printf("%s\n", (s+1));

}

// pointer: 8 bytes
// int: 4 bytes