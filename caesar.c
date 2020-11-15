// Program that takes input key from user and encrypts the plaintext user provide into ciphertext

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    // To make sure user gives only one comm-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesor key\n");
        return 1;
    }


    // Checking each char of argv[1] is a digit
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }
    // Convert key from string into an int
    int key = atoi(argv[1]);

    // Getting plaintext from user
    string ptext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(ptext); i < n; i++)
    {
        if (isalpha(ptext[i]))
        {
            printf("%c",(ptext[i] + key) % 26);
    

        }
        else
        {
            printf("%c",ptext[i]);
        }
        
    }
    printf("\n");



}