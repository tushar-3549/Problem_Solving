#include<stdio.h>
int main()
{
    int h1,m1;
    scanf("%d %d",&h1,&m1);
    int h2,m2;
    scanf("%d %d",&h2,&m2);
    int dif;
    dif  = (h2*m2*60)-(h1*m1*60);
    if(dif<=60)
        dif +=24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dif/60,dif%60);
    return 0;

}
