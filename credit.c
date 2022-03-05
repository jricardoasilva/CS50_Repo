#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string cc = get_string("Enter the credit card number: ");
    int i;


    i = strlen(cc) - 1;
    int x = 0;
    int y = 0;

    do
    {
            y=y+((cc[i]-'0'));
            i=i-1;
        if (i>=0)
        {
            x=x+((cc[i]-'0'))*2;
            i=i-1;
        }

    }

    while (i>=0);
    int res = x+y;
    printf("Total: %d \n", res);
    string flag = "N/F";

    printf("Card #: ");

    for (i=0; i<=strlen(cc); i++)
    {
        if(i>0 && i%4==0 && i<strlen(cc))
        {
            printf("-");
        }

        printf("%c", cc[i]);

    }
    printf("\n");

    if (cc[0]=='4')
    {
        flag="VISA";
    }
    else if (cc[0]=='3' && (cc[1]=='4'||cc[1]=='7'))
    {
        flag="AMEX";
    }
    else if (cc[0]=='5' && (cc[1]=='1'||cc[1]=='2'||cc[1]=='3'||cc[1]=='4'||cc[1]=='5'))
    {
        flag="MASTER";
    }
    else
    {
        flag="N/F";
    }




    if (res%10==0)
    {
        printf("VALID \n");
        printf("flag %s \n", flag);
    }
    else
    {
        printf("INVALID! \n");
    }





}