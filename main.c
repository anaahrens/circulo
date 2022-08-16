#include <stdio.h>

int main()
{
    double r, area, pi;

    pi = 3.1415;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf)", &r);
    area = pi * (r * r);
    printf("Area: %.4lf", area);

    return 0;
}
