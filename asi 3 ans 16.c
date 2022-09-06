#include<stdio.h>
int main()
{
    int s1,s2,s3,t;
    printf("enter 3 sides of a triangle");
    scanf("%d %d %d",&s1,&s2,&s3);
    t=s1+s2+s3;
    if(t==180)
    {
        printf("triangle is perfect");
    }
    else
    {
        printf("not a perfect triangle");
    }
    return 0;
}
