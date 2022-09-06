#include<stdio.h>
int main()
{
    int a,count;
    printf("enter a no. to find it is of three digit or not");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    if(count==3)
    {
        printf("3 digit no");
    }
    else
    {
        printf("not a 3 digit no");
    }
    return 0;


}


