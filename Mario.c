/* This is the less comfortable implimentation of the Mario Pyramid Problem */
#include <cs50.h>
#include <stdio.h>

void say(string s, int n);
void hash(int n);
void dash(int n);

int main(void)
{
    int h;
    do
    {
        h = get_int("Height:");
    }
    while(h < 0 || h > 23);


    for (int n = 0; n <= h; n++)
    {
        hash(n);
        dash(n);
    }
}


void say(string s, int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%s", s);
    }
    printf("\n");
}

void hash(int n)
{
    say("#", n);
}

void dash(int n)
{
    say("-", n);
}
