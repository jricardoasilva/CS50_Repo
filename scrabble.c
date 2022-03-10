#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    printf("Word Player1 = %s, score1= %i\n", word1, score1);
    int score2 = compute_score(word2);
    printf("Word Player2 = %s, score2= %i\n", word2, score2);

    // TODO: Print the winner
    if(score1>score2)
    {
        printf("PLAYER 1 WINS!, Total Score = %i\n", score1);
    }
    else if (score2>score1)
    {
        printf("PLAYER 2 WINS!, Total Score = %i\n", score2);
    }
    else
    {
        printf("We have a TIE!, both scores = %i\n", score2);
    }

}

int compute_score(string word)
{
    // TODO: Compute and return score for string

    string w = word;
    char a[2][26];
    int score = 0;

    for (int i=0; i<26; i++)
    {
        char c = (65 + i);
        a[0][i]=c;
        //printf("a[0][%i]= %c\n", i, a[0][i]);
        c = (97 + i);
        a[1][i]=c;
        //printf("a[1][%i]= %c\n", i, a[1][i]);
    }
    for (int i=0; i<=strlen(w);i++)
    {
        for(int j=0; j<26;j++)
        {
            //check the character case, and if it's a letter
            //if ((w[i]>='a' && w[i]<='z') || (w[i]>='A' && w[i]<='Z'))
            if (w[i]==a[0][j] ||w[i]==a[1][j])
            {
                score = score + POINTS[j];
            }
        }
    }

    return score;
}