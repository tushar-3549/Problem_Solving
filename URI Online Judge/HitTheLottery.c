#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans,left;
    ans = n / 100;
    left = n % 100;

    ans+= left/20;
    left = left%20;

    ans+=left/10;
    left = left%10;

    ans+=left/5;
    left=left%5;

    ans+=left/1;

    printf("%d",ans);
    return 0;
}