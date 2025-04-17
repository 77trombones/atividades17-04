#include "igualdade.h"
#include <stdio.h>

int main() {
    int num1, num2, num3, maiornumero;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    maiornumero = maior(num1, num2);
    maiornumero = maior(maiornumero, num3);

    printf("O maior número é: %d\n", maiornumero);

    return 0;
}
