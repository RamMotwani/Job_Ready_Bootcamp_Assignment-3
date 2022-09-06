#include<stdio.h>
int main()
{
    int n;
    printf("enter a no. to check it is positive,negative or equal");
    scanf("%d",&n);
    if(n>0)
    {
        printf("posotive");
    }
    else
    {
        if(n==0)
    {
        printf("no is equal to zero");
    }
    else
    {
        printf("negative");
    }
    }
    return 0;
}
