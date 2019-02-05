#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //make sure the command line accept just 2 arguments no more no less//
    if (argc != 2)
    {
        printf("Try Again with 2!! \n");
        return 1;
    }
    string key = argv[1];

    for (int i = 0; i < strlen(key); i++)
    {
       // make sure all key characters are alphabetic //
        if (isalpha(key[i]))
        {
        }
        else
        {
            printf("ur key is not valid \n");
            return 1;
        }
    }

    printf("your plaintext: ");
    string pt = get_string();
    int counter = 0;
    printf("ciphertext: ");

//read each charachter of the plaintext //
    for (int j = 0; j < strlen(pt); j++)
    {
        if (!isalpha(pt[j]))
        {
            counter++;
            printf("%c", pt[j]);
        }
        else
        {
// j is the number of the plaintext characters and j - counter eliminate all spaces and other charachters//
            int i = ((j - counter) % strlen(key));
            if (isupper(pt[j]))
            {
               if (isupper(key[i]))
               {
                 printf("%c", ((((pt[j] + key[i]) - 130) % 26) + 65));
               }
               else
               {
                 printf("%c", ((((pt[j] + key[i]) - 162) % 26) + 65));
               }
            }
            else
            {
               if (isupper(key[i]))
               {
                    printf("%c", ((((pt[j] + key[i]) - 162) % 26) + 97));
               }
               else
               {
                  printf("%c", ((((pt[j] + key[i]) - 194) % 26) + 97));
               }
            }
        }
    }
    printf("\n");
    return 0;
}
