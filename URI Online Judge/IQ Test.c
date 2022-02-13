#include<stdio.h>
int main()
{
    int n;
    int j=0,b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
        {
            j++;
        }
        else
        {
            b++;
        }
    }
    if(j>b)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2 != 0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    if(j<b)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2 == 0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;

}
