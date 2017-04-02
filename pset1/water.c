#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes;
    int bottles;
    printf("How long do you shower?\n");
    minutes = get_int();
    bottles = minutes * 12;
    printf("Looks like you're using about %i bottles of water.\n", bottles);
    
    
}