#include<stdio.h>
int main()
{
   int i,j,a,b,temp,x=0;
   for(i=0;i<100;i++)
   {
       scanf("%d %d",&a,&b);
       if(a<=0 || b<=0)
        break;
       if(a>b) {temp=a;a=b;b=temp;}
       for(j=a;j<=b;j++)
       {
          printf("%d ",j);
       x+=j;
       }
       printf("Sum=%d\n",x);
       x=0;

   }

   return 0;


}
