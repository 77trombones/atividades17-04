#include <stdio.h>
#include "igualdade.h"

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (igual(num1, num2)) {
        printf("Os números são iguais.\n");
    } else {
        printf("Os números são diferentes.\n");
    }

    return 0;
}
