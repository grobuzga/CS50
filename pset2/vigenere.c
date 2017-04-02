#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string keyword = argv[1];
    if(argc != 2)
    {
        printf("Invalid keyword\n");
        return 1;
    }
    
    for(int i = 0, n = strlen(keyword); i < n; i++)
    {
        if(!isalpha(keyword[i]))
        {
        printf("Invalid keyword\n");
        return 1;
        }   
    }


    printf("plaintext:");
    string text = get_string();
    
    printf("ciphertext: ");
    
    for(int i = 0, k=0, n = strlen(text); i < n; i++)
    {
        if(k >= strlen(keyword))
        {
            k = 0;
        }
        
        int mod = tolower(keyword[k]) - 97;
        
         if islower(text[i])
        {
            printf("%c", (((text[i] + mod) - 97) % 26) + 97);
            k++;
        }
        else if isupper(text[i])
        {
            printf("%c", (((text[i] + mod) - 65) % 26) + 65);
            k++;
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}