#include<stdio.h>
int main()
{
    int a;
    printf("enter a no to check it is even or odd");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("no. is even");
    }
    else
    {
        printf("no. is odd");
    }
    return 0;
}
