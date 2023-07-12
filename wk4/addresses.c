#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // * => pointer called p, instructs the compiler to go to a location in memory
    printf("%p\n", p); // & provides the address of sth stored in memory
}

// pointer: 8 bytes
// int: 4 bytes