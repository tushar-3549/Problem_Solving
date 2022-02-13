#include<stdio.h>
int main()
{
    long long int n,a;
    scanf("%lld",&n);
    if(n%2==0)
    {
        printf("%lld",n/2);
    }
    else
    {
        a = -(n/2+1);
        printf("%lld",a);
        return 0;
    }
}
