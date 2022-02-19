#include<stdio.h>
int main()
{
    int n,k,max=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        max=arr[i];
    }
    int j=max-k;
    if(j<0)
    printf("0");
    else
     {
    printf("%d",j);
    }
    return 0;
}
