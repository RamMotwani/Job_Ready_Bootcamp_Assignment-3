
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("lower case alphabet");
    }
    else
    {
        if(ch>='A'&&ch<='Z')
        {
            printf("upper case alphabet");
        }
        else
        {
            printf("special symbol");
        }
    }

    return 0;
}
