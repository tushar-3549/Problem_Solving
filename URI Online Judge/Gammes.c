#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
