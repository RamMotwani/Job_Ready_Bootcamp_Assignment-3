
#include<stdio.h>
int main()
{
    int n;
    printf("enter a no. to check it is divisible 3 & 2");
    scanf("%d",&n);
    if(n%3==0)
    {
        if(n%2==0)
        {
            printf("no. is divisible by 3 & 2");
        }
        else
        {
            printf("no. is divisible by 3 but not divisible by 2");
        }

    }
    else
    {
        printf("no. is not divisible by 3 & 2");
    }

    return 0;
}
