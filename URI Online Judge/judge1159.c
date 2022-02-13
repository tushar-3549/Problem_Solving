#include<stdio.h>//Sum of Consecutive Even Numbers
int main()
{
    int i,x,sum;
    while(1)
    {
        sum=0;
        scanf("%d",&x);
        if(x==0) break;
        if(x%2!=0)
            x++;
        for(i=1;i<=5;i++)
        {
            sum+=x;
            x+=2;
        }
        printf("%d\n",sum);

    }
    return 0;
}
