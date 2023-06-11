#include <cs50.h>
#include <stdio.h> // header file declares the functions(library: stdio) to exist

int main(void) {
    string first = get_string("What's your first name? ");
    string last = get_string("What's your last name? ");
    printf("Hello, %s %s!\n", first, last);  // \n -> escape sequence
}