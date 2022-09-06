
#include<stdio.h>
int main()
{
    int n;
    printf("enter a no. to check it is divisible 3 & 7");
    scanf("%d",&n);
    if(n%3==0)
    {
        if(n%7==0)
        {
            printf("no. is divisible by 3 & 7");
        }
        else
        {
            printf("no. is divisible by 3 but not divisible by 7");
        }

    }
    else
    {
        printf("no. is not divisible by 3 & 7");
    }

    return 0;
}
