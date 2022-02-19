#include<stdio.h>
int main()
{
    int n,d,i;
    scanf("%d %d",&n,&d);
    int arr[n],s[n];
    for (i=0; i<n; i++)
     {
        scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)
     {
         s[i]=arr[(d+i)%n];
     }
     for(i=0;i<n;i++)
     {
         printf("%d ",s[i]);
         
     }
     return 0;
}
