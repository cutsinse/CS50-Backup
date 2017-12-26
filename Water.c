/* This program is used to calculate water consumption */
#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int min;
   do
   {
      min = get_int("Minutes: ");
   }
   while(min < 0);

   int wc = min*12;
   printf("Bottles: %i\n", wc);
}
