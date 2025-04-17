#include <stdio.h>
#include "util.h"

int main() {
    double r;
    printf("Digite o raio: ");
    scanf("%lf", &r);

    printf("A área do círculo é: %.2f\n", area(r));
    return 0;
}
