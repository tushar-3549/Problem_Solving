#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld",&a)!=EOF) {
        scanf("%lld",&b);
        printf("%lld\n",a*b);
    }
    return 0;
}
