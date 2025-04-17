#include <stdio.h>

int numero() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    return numero;
}

int main() {
    int resultado;
    resultado = numero();
    printf("O número digitado foi: %d\n", resultado);

    return 0;
}
