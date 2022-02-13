#include<stdio.h>
#include<string.h>
int main()
{
    char str[2346];
    int n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&str);
        l=strlen(str);
        printf("%.2f\n",l/100.0);
    }
    return 0;
}
