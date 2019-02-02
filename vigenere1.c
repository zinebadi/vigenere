#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// A program that encrypts messages using Caesar’s cipher. Your program must//

int main(int argc, string argv[])
{
  //chechk if argc is equal to 2 //
  if (argc != 2)
    {
    printf("error more or less than 2\n");
    return 1;
    }
    else
    {
      string key = argv[1];

      for ( int j = 0; j < strlen(key); j++)
      {
        if (isalpha(key[j]))
        {
        }
        else
        {
          printf("Error your key is not alphabetical\n");
          return 2;
        }
      }

      //get the plaintext//
      printf("what s your message?\n");
      string pt = get_string();
    }
}
        
      for ( int j = 0; j < strlen(key); j++)
      {
        for (int i = 0; i < strlen(pt); i++)
         {
          if (isalpha (pt[i]))
            {
                if (isupper (pt[i]))
                {
                  if (isupper (key[j]))
                  {
                     printf("%c", ((((pt[i] + key[j]) - 130) % 26) + 65));
                  }
                  else
                  {
                    printf("%c", ((((pt[i] + key[j]) - 162) % 26) + 65));
                  }
                
                {
                  printf("%c", ((((pt[i] + key[j]) - 130) % 26) + ));
                }

              else if (islower(pt[i]) && islower(key[j]))
                {
                  printf("%c", ((((pt[i] + key) - 194 )% 26) + 194));
                }
              else 
              {
                printf("%c", ((((pt[i] + key) - 162 )% 26) + 162));
              }
         
                
             }
            else
            {
               printf("%c", pt[i]);
            }
          }
        printf("\n");
        return 0;
        }
    }
}


while(

  
  
  
  
  
  
  
  
  
  
while ( n = strlen(pt) % strlen(key) )
  
 
  
for (int i = 0; i < strlen(pt); i++)
  {
    int n = i % strlen(key);
    
    
      if (isalpha (pt[i]))
            {
                if (isupper (pt[i]))
                {
                  if (isupper (key[j]))
                  {
                     printf("%c", ((((pt[i] + key[j]) - 130) % 26) + 65));
                  }
                  else
                  {
                    printf("%c", ((((pt[i] + key[j]) - 162) % 26) + 65));
                  }
                }
                else
                {
                  if (isupper (key[j]))
                  {
                     printf("%c", ((((pt[i] + key[j]) - 162) % 26) + 97));
                  }
                  else
                  {
                    printf("%c", ((((pt[i] + key[j]) - 194) % 26) + 97));
                  }
                }
            }
            else
            {
              printf("%c", pt[i]);
            }
  }
      











