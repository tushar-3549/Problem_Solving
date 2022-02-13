
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s1[51];
        char s2[51];
        scanf("%s",&s1);
        scanf("%s",&s2);
        int l1 = strlen(s1) , l2 = strlen(s2);
        int l = l1 + l2;
        char s[l];
        int j=0;
        int k=0;
        int index=0;
        while(j<l1 && k<l2)
        {
            s[index++]=s1[j++];
            s[index++]=s2[k++];
        }
        while(j<l1)
        {
            s[index++]=s1[j++];
        }
        while(k<l2)
        {
           s[index++]=s2[k++];
        }
        int m;
        for(m=0;m<index;m++)
        {
            printf("%c",s[m]);
        }
        printf("\n\n");

    }
    return 0;
}
