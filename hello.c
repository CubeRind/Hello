// Libraries needed for code
#include <stdio.h>
#include <cs50.h>

// Prints hello name out
int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}