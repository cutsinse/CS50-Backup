/*Less comfortable: the goal of this program is to show the least number of coins that can be dispirsed in order to give change */
#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float d; /*d is the dollar input from the user */
    do
    {
    d = get_float("O hai! How much change is owed?");
    }
    while (d < 0);
    d = d *100; /*allows rounding function to work properly */
    d = round(d); /*rounds values from 419.34829394 (ect) to 420*/
    int c = d; /* truncates or removes the decimals in order to only work with ints */

    int ct = 0; /*ct is "count" or number of coins used so far */

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

    printf("%i %i\n", ct);

}
