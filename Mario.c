/* This is the less comfortable implimentation of the Mario Pyramid Problem */
#include <cs50.h>
#include <stdio.h>

void hash(void);

int main(void)
{
    int h;
    do
    {
       h = get_int("Height: ");
    }
    while(h < 0 || h > 23);

    hash();
}

void hash(void)
{
    printf("#\n");
}
