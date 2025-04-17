#include <stdio.h>
#include "igualdade.h"

int main() {
    int num1, num2, menor_numero;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    menor_numero = menor(num1, num2);

    printf("O menor número é: %d\n", menor_numero);

    return 0;
}
