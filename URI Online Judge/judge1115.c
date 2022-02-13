#include<stdio.h>//QUADRANT
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 || b==0)
            break;
        if(a>0 && b>0) printf("primeiro\n");
       else if(a<0 && b>0) printf("segundo\n");
        else if(a<0 && b<0) printf("terceiro\n");
       else if(a>0 && b<0) printf("quarto\n");

    }
    return 0;
}
