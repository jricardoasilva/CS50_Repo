#include <stdio.h>
#include <cs50.h>

int main(void)
{
      // TODO: Solicite o valor inicial ao usuário
    int n;
    do
    {
        n = get_int("Enter the start size: ");
    }
    while (n < 9);



     // TODO: Solicite o valor final ao usuário

    int m;
    do
    {
        m = get_int("Enter the end size: ");
    }
    while (m <= n);



     // TODO: Calcule o número de anos até o limite

    int p = n;
    long babies;
    long deaths;
    int year = 0;
    do
    {
        babies = p/3;
        deaths = p/4;
        p = p + babies - deaths;
        //printf("Population? %d \n",p);

        year = year + 1;
        //printf("Years: %d \n", year);

    }
    while (p <= m);


     // TODO: Imprima o número de anos

    printf("Start size: %d \n", n);
    printf("End size: %d \n", m);
    printf("Population? %d \n",p);
    printf("Years: %d \n", year);
}