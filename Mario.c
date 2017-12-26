/* This is the less comfortable implimentation of the Mario Pyramid Problem */
#include <cs50.h>
#include <stdio.h>


void hash(int n);
void space(int n);

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 0 || h > 23);


    for (int n = 1; n <= h; n++)
    {
        space(h-n);
        hash(n);

    }
}


void hash(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");
}

void space(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf(" ");
    }
}
