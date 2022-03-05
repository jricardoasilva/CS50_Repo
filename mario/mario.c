#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h = 1;
    while (h > 0)
    {
        h = get_int("Height: ");
        char d = get_char("Which direction right or left, r or l? ");
        printf("\n");
        if (h >0 && h<9)
        {
            for (int i = 1; i <= h; i++)
            {
                if (d=='r' || d=='R')
                {
                    for (int j = 1; j<=(h-i); j++)
                    {
                        printf(" ");
                    }
                }
                for (int j = 1; j<=i; j++)
                {
                    printf("#");
                }
                printf("\n");

            }
        }
    }
}