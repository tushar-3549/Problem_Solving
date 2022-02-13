#include<stdio.h>
int main()
{
    int arr[4],count=0;
    int i;
    for(int i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }

    /*int max=arr[0];
    for(i=1;i<4;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }*/

    for(int i=0; i<3; i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
