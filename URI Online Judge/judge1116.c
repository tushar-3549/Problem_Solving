#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a,b;
    for(i=0;i<n;i++)
    {
       scanf("%f %f",&a,&b);
       if(b==0) printf("divisao impossivel\n");
       else printf("%.1f\n",a/b);


    }
    return 0;

}
