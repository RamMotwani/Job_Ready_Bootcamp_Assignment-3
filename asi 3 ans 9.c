#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter three no.s to find which is grater");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b&&a>c)
   {
       printf("\n%d",a);
   }
   else
   {
       if(b>c)
       {
           printf("\n %d",b);
       }
       else
       {
           printf("\n %d",c);
       }
   }


   return 0;
}
