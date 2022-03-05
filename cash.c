#include <stdio.h>
#include <cs50.h>

int split_change(int r, int face);

int main(void)
{
    int c25 = 0;
    int c10 = 0;
    int c5 = 0;
    int c1=0;



    int chg = get_int("How much is the total change? ");

    while(chg>0)
    {
        // try 25c

        chg = split_change(chg,25);

        // try 10c

        chg = split_change(chg,10);

        // try 5c
        chg = split_change(chg,5);

        // try 1c
        chg = split_change(chg,1);


    }


}

int split_change(int r, int face)
{
    int c=r/face;
    r = r%face;
    printf("%i",face);
    printf("c: %i",c);
    if (c==1)
    {
        printf(" coin \n");
    }
    else
    {
        printf(" coins \n");
    }
    return(r);


}
