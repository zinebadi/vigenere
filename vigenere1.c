#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
   // j is the Jth number in the key character & k is the result of key character - the ASCII Number 
    int j;
    int k;
    int l = 0;

    //Make sure there is only one command line argument
    if (argc != 2)
    {
        printf("Try Again\n");
        return 1;
    }


    string key = (argv[1]);
    //Make sure command line argument is alpha
    for (int i = 0; i < strlen(key); i++)
    {
        if (isalpha(key[i]) == false)
        {
            printf("Try Again\n");
            return 2;
        }
    }

    //Get user input string
    string plainText = get_string("plaintext: ");

    //Place to print cipher text
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plainText); i++)
    {
        //Encrypt lower case of plaintext
      
        if islower(plainText[i])
        {
          if isupper(key[j])  
          {
            j = (l % strlen(key));
            k = (key[j]) - 65);
            printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
            l += 1;
          }
          else 
          {
            j = (l % strlen(key));
            k = (key[j]) - 97);
            printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
            l += 1;
          }
       
        //encrypt upper case of plaintext
        else if isupper(plainText[i])
        {
            if isupper(key[j])  
          {
            j = (l % strlen(key));
            k = (key[j]) - 65);
            printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
            l += 1;
          }
          else 
          {
            j = (l % strlen(key));
            k = (key[j]) - 97);
            printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
            l += 1;
          }
        //print anything else
        else
        {
            printf("%c", plainText[i]);
        }
    }
    printf("\n");
    return 0;
}
