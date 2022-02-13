#include<stdio.h>
int main()
{
    int a,b,c,max_value;
    scanf("%d %d %d",&a,&b,&c);
    max_value=a;
    if(b>max_value)
        max_value=b;
    if(c>max_value)
        max_value=c;
    printf("%d eh o maior\n",max_value);
    return 0;

}
