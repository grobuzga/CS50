#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   float change;
   int counter = 0;
   
   do
   {
       printf("How much change is owed?\n");
       change = get_float();
   }
   while (change < 0);
   
   change = round(change * 100);
   

   while(change >= 25)
   {
         change = change - 25;
         counter++;
   }
   while(change >= 10)
   {
         change = change - 10;
         counter++;
   }
   while(change >= 5)
   {
         change = change - 5;
         counter++;
   }
   while(change >= 1)
   {
         change = change - 1;
         counter++;
   }
   printf("%i\n", counter);
}