#include<stdio.h>
int main()
{
    int x,y,i,temp;
    scanf("%d %d",&x,&y);
    if(x>y) {temp=x;x=y;y=temp;}
    x++;//Why need this line?This line is unnecessary for need right answer?But show 5% wrong
    for(i=x;i<y;i++)
    {
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }
    return 0;

}
