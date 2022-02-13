#include<stdio.h>//Lowest Number and Position
int main()
{
    int num[100],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int min=num[0];
    int pos=0;
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];

    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}

