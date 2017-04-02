#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    long long int entered_number, card_number;
    int digits = 0;
    
    
    
    do
    {
        printf("Enter your credit card number\n");
        entered_number = get_long_long();
    }
    while(entered_number < 1);
    card_number = entered_number;
    
    while(entered_number >= 1)
    {
        entered_number = entered_number / 10;
        digits++;
    }
    
    if(digits != 13 && digits != 15 && digits != 16)
    {
        printf("INVALID\n");
        
        return 0;
    }
    long long company_identifier = card_number;
    while (company_identifier >= 100)
        company_identifier /= 10;
    
    int sum = 0;
    
    while (card_number)
    {
        int last_digit= card_number % 10;
        int second_last_digit = (card_number / 10) % 10;
        
        int product = second_last_digit * 2;
        
        if(product >9)
        {
            product = 1 + (product - 10);
        }
        
        sum = sum + (product + last_digit);
        
        card_number = card_number / 100;
            
    }
    
    if(sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if(company_identifier == 34 || company_identifier == 37)
    {
        printf("AMEX\n");
    }
    else if(company_identifier >= 51 && company_identifier <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if(company_identifier >= 40 && company_identifier <= 49)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}