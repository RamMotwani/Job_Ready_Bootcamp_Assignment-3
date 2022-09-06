#include<stdio.h>
int main()
{
    int hin,eng,math,phy,che,total;
    printf("enter marks of hindi , english , math , physics , chemistry");
    scanf("%d %d %d %d %d",&hin,&eng,&math,&phy,&che);
    total=hin+eng+math+phy+che;
    total=100*total/500;
    if(total>=33)
    {
        printf("student is pass");
    }
    else
    {
        printf("student is fail");
    }
    return 0;
}
