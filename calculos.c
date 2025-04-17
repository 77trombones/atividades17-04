#include <stdio.h>
#include "util.h"

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    double d = diametro(r);
    double c = circunferencia(r);
    double a = area(r);

    printf("Resultados para o círculo de raio %.2f:\n", r);
    printf("Diâmetro: %.2f\n", d);
    printf("Circunferência: %.2f\n", c);
    printf("Área: %.2f\n", a);

    return 0;
}