#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

if (num1 == num2) {
        printf("iguais : sim\n");
    } else {
        printf("iguais : não\n");    
    }

if(num1 > num2) {
        printf("maior: %d\n", num1);
        printf("menor: %d\n", num2);
} else {
        printf("menor: %d\n", num2);
        printf("maior: %d\n", num1);
        }
return 0;
}