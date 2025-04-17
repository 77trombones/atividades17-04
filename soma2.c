#include <stdio.h>

void soma(int valor) {
    printf("O resultado da soma é: %d\n", valor);
}

int main() {
    int a;
    int b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);
    int resultado = a + b;

    soma(resultado);

    return 0;
}