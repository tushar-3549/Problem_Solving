#include<stdio.h>
int main()
{
    int n,temp,a,flag=0;
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        a=temp%10;
        if(a==4 || a==7)
        flag=1;
        else
        {
            flag=0;
            break;
        }
        temp=temp/10;
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%477==0 || n%447==0 || n%474==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}