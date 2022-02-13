#include<stdio.h>//Perfect numbers
int main()
{
   int i,j,n,x,sum;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum=0;
       scanf("%d",&x);
       for(j=1;j<=x/2;j++)//x/2 why is it??
       {
           if(x%j==0)
            sum+=j;
       }
       if(sum==x) printf("%d eh perfeito\n",x);
       else printf("%d nao eh perfeito\n",x);
   }
   return 0;

}
