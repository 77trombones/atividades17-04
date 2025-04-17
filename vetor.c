#include <stdio.h>

#define MAX_SIZE 100 


int numero() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    return numero;
}

int main() {
    int tamanho;
    int numeros[MAX_SIZE]; 
    
    printf("Quantos números você deseja digitar? (Máximo %d) ", MAX_SIZE);
    scanf("%d", &tamanho);

    // Verifica se o tamanho é válido
    if (tamanho <= 0 || tamanho > MAX_SIZE) {
        printf("o tamanho deve estar entre 1 e %d.\n", MAX_SIZE);
        return 0;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        numeros[i] = numero(); 
    }

    printf("Os números digitados foram:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
