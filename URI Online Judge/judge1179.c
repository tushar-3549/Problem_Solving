#include<stdio.h>//Array Fill IV
int main()
{
   int i,n,m,E[0],O[0],l=0,k=0;
   for(i=0;i<15;i++)
   {
       scanf("%d",&n);
       if(n%2==0)
       {
           E[l]=n;
           l++;
           if(l==5)
           {
               for(m=0;m<5;m++)
               {
                   printf("par[%d] = %d\n",m,E[m]);
                   E[m]=0;
               }
               l=0;
           }
           else {
                O[k]=n;
           k++;
           if(k==5)
           {
               for(m=0;m<5;m++)
               {
                   printf("impar[%d] = %d\n",m,O[m]);
           O[m]=0;
               }
               k=0;
           }
           }
       }

   }
   for(i=0;i<5;i++)
   {
       if(O[i]==0) break;
       printf("impar[%d] = %d\n",i,O[i]);
   }
    for(i=0;i<5;i++)
   {
       if(E[i]==0) break;
       printf("par[%d] = %d\n",i,E[i]);
   }

   return 0;


}
