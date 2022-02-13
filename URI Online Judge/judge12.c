#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A, &B, &C);
    printf("TRIANGULO: %.3lf\n",(0.5*A*C));
    printf("CIRCULO: %.3lf\n",(3.14159*C*C));
    printf("TRAPEZIO: %.3lf\n",(0.5*(A+B)*C));
    printf("QUADRADO: %.3lf\n",(B*B));
    printf("RETANGULO: %.3lf\n",(A*B));
    return 0;

}
