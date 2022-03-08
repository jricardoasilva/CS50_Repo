#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int counter = 0;
    
    for (int i = 65 ; i = 91; i++)
    {
        string a    
    }
    string a[0] =
    if (argc == 2)
    {
        // Validating the key

        string k = argv[1];

        if (strlen(argv[1])==26)
        {
            printf("argv[1]: %s \n", argv[1]);

            for (int i=0; i < 26; i++)
            {
                if ((k[i]>='a' && k[i]<='z')||(k[i] >= 'A' && k[i]<='Z'))
                {
                    printf("k[%i] = %c \n", i,  k[i]);
                    for (int m = 0; m<26; m++)
                    {

                        for (int n = 0; n<26; n++)
                        {
                            if (k[m]==k[n])
                            {
                                counter++;
                                if (counter>=2)
                                {
                                    printf("Key must not have repeated characters \n");
                                    return 1;
                                }

                            }

                        }
                        counter = 0;
                    }

                }
                else
                {
                    printf("Key must not have non-alphabetic characters \n");
                    return 1;

                }
            }
        }
        else
        {
            printf("Key must have 26 characters \n");
            return 1;

        }
        // get plaintext



        // Encipher



        // Print ciphertext

    }



}