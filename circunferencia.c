#include <stdio.h>
#include "util.h"

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    double c = circunferencia(r);
    printf("A circunferência do círculo de raio %.2f é %.2f\n", r, c);

    return 0;
}