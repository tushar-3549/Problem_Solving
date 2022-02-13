#include<stdio.h>
int main()
{
   int n,rem;
   while(scanf("%d",&n)!=EOF)
   {
       while(n)
       {
           rem=n%10;
           n=n/10;
           printf("%d",rem);
       }
       printf("\n");
   }
    return 0;
}
