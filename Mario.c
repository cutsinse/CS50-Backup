/* This is the less comfortable implimentation of the Mario Pyramid Problem */
#include <cs50.h>
#include <stdio.h>

void say(string s, int n);
void hash(int n);
void dash(int n);

int main(void)
{
    hash(3);
    dash(3);
}


void say(string s, int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%s\n", s);
    }
}

void hash(int n)
{
    say("#", n);
}

void dash(int n)
{
    say("-", n);
}
