#include<stdio.h>
int main()
{
    double r,pi,volume;
    pi=3.14159;
    scanf("%lf",&r);
    volume = (4.0/3.0)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
