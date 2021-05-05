#include <stdio.h>

int main() {
    int valor1, valor2, soma = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor1);
    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    printf("A soma dos valores é: %d\n", soma);
}