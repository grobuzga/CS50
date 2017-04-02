#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int height;
   int rows;
   int spaces;
   int lhashes;
   int rhashes;

   
   do
   {
       printf("How high would pyramid be?\n");
       height = get_int();
   }
   while (height < 0 || height > 23);
   
   for(rows = 0; rows < height; rows++)
   {
        for(spaces = 0; spaces < (height - rows) - 1; spaces++)
       {
           printf(" ");
       }
       for(lhashes = 0; lhashes < rows + 1; lhashes++)
       {
           printf("#");
       }
       printf("  ");
       for(rhashes = 0; rhashes < rows + 1; rhashes++)
       {
          printf("#");
       }
      
       printf("\n");
   }
}