#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        //&& ((argv[1]>='a' && argv[1]<='z') || (argv[1]>='A' && argv[1]<='Z'))
        if (atoi(argv[1])<=26)
        {
            if (atoi(argv[1])>0)
            {
                int k = atoi(argv[1]);
                printf("argv[1] = %s \n", argv[1]);
                printf("k = %i \n", k);

                string p = get_string("Enter the plain text: ");
                printf("plaintext = %s \n", p);
                string c = p;
                for (int i = 0, n = strlen(p); i < n; i++)
                {
                    if((p[i]>='a' && p[i]<='z') || (p[i]>='A' && p[i]<='Z'))
                    {
                        c[i]=p[i]+k%26;
                    }
                }
                printf("ciphertext = %s \n", c);
            }
            else
            {
                printf("Argumento inválito. Digite um número\n");
                return 1;
            }
        }
        else
        {
            printf("Argumento inválito. Digite um número menor que 26\n");
            return 1;
        }

    }

}