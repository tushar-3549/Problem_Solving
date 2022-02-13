#include<stdio.h>//Sum of Consecutive Odd Numbers III
int main()
{
    int n,i,j,x,y,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d %d",&x,&y);
        if(x%2==0) x++;
        for(j=1;j<=y;j++){

            sum+=x;
            x+=2;
        }
          printf("%d\n",sum);
    }
   return 0;
}
