#include<stdio.h>
int main()
{
    double l;

    int a,b,c,d,e,f,g,h,i,j,k,n;
    scanf("%lf",&l);
    n = l * 100;
    a = n / 10000;
    n = n % 10000;
    b = n / 5000;
    n = n % 5000;
    c = n / 2000;
    n = n % 2000;
    d = n / 1000;
    n = n % 1000;
    e = n /500;
    n = n % 500;
    f = n / 200;
    n = n % 200;
    g = n / 100;
    n = n % 100;
    h = n / 50;
    n = n % 50;
    i = n / 20;
    n = n % 20;
    j = n / 10;
    n = n % 10;
    k = n / 5;
    n = n % 5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",n);
    return 0;
}
