#include <stdio.h>
#include "util.h"

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    double d = diametro(r);
    printf("O diâmetro do círculo de raio %.2f é %.2f\n", r, d);

    return 0;
}
