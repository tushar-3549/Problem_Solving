// distinct characters means same characters in a word.In that case , two loops (1st to last and last to 1st)
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,a=0;
    char s[100];
    scanf("%s",s);
    int i,j;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                count=1;
                break;
            }
        }
        if(count==0)
            a++;
        count=0;
    }
    if(a%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
