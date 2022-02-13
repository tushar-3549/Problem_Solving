#include<stdio.h>//Our Days Are Never Coming Back
#include<string.h>
int main()
{
    int n,i;
    char ch[31];
    strcpy(ch,"LIFE IS NOT A PROBLEM TO BE SOLVED");

    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}
