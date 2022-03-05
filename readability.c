#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Type your text: ");


    float index = 0.0;
    float L = 0.0;
    float S = 0.0;
    float letters = 0.0;
    float words = 1.0;
    float sentences = 0.0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //Number of Letters
        if ((s[i] >= 'a' && s[i]<='z') ||(s[i] >= 'A' && s[i]<='Z'))

        {
            letters++;

        }
        //Number of words
        else if (s[i] == ' ' )
        {
            words++;

        }

        //Nunber of sentences
        else if (s[i] == '.' || s[i] == ',' || s[i] == ';' || s[i] == ':' || s[i] == '?' || s[i] == '!')
        {
            sentences++;

        }
    }

        printf("Letters:  %f \n", letters);
        printf("Words:  %f \n", words);
        printf("Sentences:  %f \n", sentences);

        //The average of Letters per 100 words
        L = ((float) letters / words) *100;

        //The average of Sentences per 100 words
        S = (sentences / words) * 100;

        printf("L:  %f \n", L);
        printf("S:  %f \n", S);

        index = (0.0588 * L) - (0.296 * S) - 15.8;

        printf("Index = %f \n",index);

        int a = (int) (index);

        if (a<0)
        {
            printf("Before Grade %i\n", a);
        }
        else if (a>16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", a);
        }
}