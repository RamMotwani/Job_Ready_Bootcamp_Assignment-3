#include<stdio.h>
int main()
{
   int sp,cp,p,l;
   printf("enter selling price and cost price to know the profit and loss percentage\n");
   scanf("%d %d",&sp,&cp);
   if(sp>cp)
   {
       p=sp-cp;
       p=100*p/cp;
       printf("you have profit of %d%%",p);
   }
   else
   {
      l=cp-sp;
      l=100*l/cp;
      printf("you have the loss of %d%% ",l);
   }
return 0;
}
