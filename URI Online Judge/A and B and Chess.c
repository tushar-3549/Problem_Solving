#include<stdio.h>
//#include<string.h>
int main()
{
    int i,j;
    char s[8][8];
    int q=0,r=0,b=0,n=0,p=0;
    int Q=0,R=0,B=0,N=0,P=0;

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            scanf("%c",&s[i][j]);
            if(s[i][j]=='q')
                q++;
            if(s[i][j]=='r')
                r++;
            if(s[i][j]=='b')
                b++;
            if(s[i][j]=='n')
                n++;
            if(s[i][j]=='p')
                p++;

            if(s[i][j]=='Q')
                Q++;
            if(s[i][j]=='R')
                R++;
            if(s[i][j]=='B')
                B++;
            if(s[i][j]=='N')
                N++;
            if(s[i][j]=='P')
                P++;

        }
    }
    int black = (q*9)+(r*5)+(b*3)+(n*3)+(p*1);
    int white = (Q*9)+(R*5)+(B*3)+(N*3)+(P*1);
    if(black>white)

        printf("Black");


    else if(white>black)

        printf("White");



    else

        printf("Draw");


    return 0;

}
