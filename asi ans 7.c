#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("enter the value of quadratic equation");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x=-b+sqrt(d)/2*a;
        y=-b-sqrt(d)/2*a;
        printf("roots are %f %f these are real and distinct root",x,y);
    }
    else
    {
        if(d==0)
        {
            x=-b/2.0*a;
            printf("roots are %f %f these are real and equal root",x,x);
        }
        else
        {
            printf("imaginary roots");
        }
        return 0;
    }


}
