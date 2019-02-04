#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
  if (argc == 2)
  {
    string key = argv[1];
    
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]) == false)
        {
            printf("Try Again\n");
            return 1;
        }
    }
        printf("your plaintext: ");
        string pt = get_string();
        int counter = 0;  
          
        //read each charachter of the plaintext //
          for (int j =0; j < strlen(pt); j++)
          {
            if (!isalpha(pt[j])
                {
                  counter++;
                  printf("%c", pt[j]);
                }
                else
                {
                  i = ((j-counter)%strlen(key));
                  if (isupper (pt[j]))
                  {
                    if (isupper (key[i]))
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
                    if (isupper (key[i]))
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
  }
  else 
  {
    printf("Try Again with 2!!");
    error 1;    
  } ghaer
