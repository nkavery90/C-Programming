#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("Hi.\nWhat is your name?\n");
    printf("Hello, %s\n", answer);
}