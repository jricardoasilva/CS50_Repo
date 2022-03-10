#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

string ciphertext(string pt, string k);

int main(int argc, string argv[])
{
    int chkrep = 0; //It'll be used to verify if there's any character repeated

    if (argc == 2)
    {
        // Validating the key

        //storage the argv[1], the key, in the variable k
        string k = argv[1];

        //Check if argv has the same number of chacters in the alphabet
        if (strlen(argv[1])==26)
        {
            printf("argv[1]: %s \n", argv[1]); //Print the key (argv)

            for (int i=0; i < 26; i++)
            {
                //Check if the key is an alphabetic character
                if ((k[i]<'a' || k[i]>'z')&&(k[i] < 'A' || k[i]>'Z'))
                {
                    printf("k[%i]= %c\n",i, k[i]);
                    printf("Key must not have non-alphabetic characters \n");
                    return 1;
                }
            }
            for (int m = 0; m<26; m++)
            {
                for (int n = 0; n<26; n++)
                {
                    //check for repeated characters
                    if (k[m]==k[n])
                    {
                        chkrep++;
                        if (chkrep>=2)
                        {
                            printf("k[%i]=%c\n",m,k[m]);
                            printf("Key must not have repeated characters \n");
                            return 1;
                        }
                    }
                }
                chkrep = 0;
            }

            //Passed all criterias and then ask for the Plain Text to be ciphered
            string ptext = get_string("Enter the plain text: ");
            string ctext = ciphertext(ptext, k);
       }
        else
        {
            printf("Key must have 26 characters \n");
            return 1;
        }
    }
}

string ciphertext(string pt, string k)
{
    //Load char a[][] array with alphabet low and up case
    string ct=pt;
    char a[2][26];
    int ascii = 65;

    for (int m = 0 ; m < 2; m++)
    {
        for(int n= 0; n < 26; n++)
        {
            char c = (ascii + n);
            a[m][n]=c;
        }
        ascii = 97;
    }
    printf("Key: %s \n",k);


    //Cipher the plain text
    for (int i = 0; i<=strlen(pt); i++ )
    {
        for(int j =0; j<26;j++)
        {
            //check the character case, and if it's a letter
            if (pt[i]>='A' && pt[i]<='Z' && pt[i]==a[0][j])
            {
                ct[i]=k[j];
                j=26;
            }
            else if (pt[i]>='a' && pt[i]<='z' && pt[i]==a[1][j])
            {
                ct[i]=k[j]+32;
                j=26;
            }
            else //if it isn't a letter, keep as-is
            {
                ct[i]=pt[i];
            }
        }
    }
    printf("Cipher text: %s \n",ct);
    return 0;
}
