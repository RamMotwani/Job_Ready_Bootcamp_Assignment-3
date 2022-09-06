#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter two no.s to find which is grater");
    scanf("%d %d",&n1,&n2);
    if(n1>=n2)
    {
        printf("%d is grater",n1);
    }
    else
    {
        printf("%d is grater",n2);
    }
    return 0;
}
