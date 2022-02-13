#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("4 ");
        printf("%d",n-4);
    }
    else
    {
        printf("9 ");
        printf("%d",n-9);
    }
    return 0;
}
