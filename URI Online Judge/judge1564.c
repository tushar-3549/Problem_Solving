#include<stdio.h>
int main()
{

    int n;
    while(scanf("%d",&n) != EOF) // End of file
    {
        if(n==0) printf("vai ter copa!\n");
        else printf("vai ter duas!\n");
    }
    return 0;
}
