#include <stdio.h>
#include "igualdade.h"

int main() {
    int num1, num2, maior_numero;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    maior_numero = maior(num1, num2);

    printf("O maior número é: %d\n", maior_numero);

    return 0;
}
