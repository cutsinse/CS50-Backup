/*Less comfortable: the goal of this program is to show the least number of coins that can be dispirsed in order to give change */
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    float d;
    do
    {
    d = get_float("O hai! How much change is owed?");
    }
    while (d < 0);
    int c = d *100;

    int ct = 0;

    while (c >= 25)
    {
        c = c -25;
        ct++;
    }
    while (c >= 10 && c < 25)
    {
        c = c -10;
        ct++;
    }

    while (c >= 5 && c < 10)
    {
        c = c -5;
        ct++;
    }
    while (c > 0 && c < 5)
    {
        c = c -1;
        ct++;
    }

    printf("%i %i\n", c, ct);

}
