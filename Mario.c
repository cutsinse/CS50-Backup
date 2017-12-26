/* This is the less comfortable implimentation of the Mario Pyramid Problem */
#include <cs50.h>
#include <stdio.h>

void hash(int n);

int main(void)
{
    hash(3);
}


void hash(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("#\n");
    }
}
