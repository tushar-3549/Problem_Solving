#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    int i,j,k,l,m;
    char X[2];
    scanf("%d %s",&m,&X);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&N[i][j]);

        }
    }
    for(i=0;i<12;i++)
    {
        sum+=N[m][i];
    }
    if(X[0]=='S') printf("%.1lf\n",sum);
    else if(X[0]=='M') printf("%.1lf\n",sum/12.0);
    return 0;

}
