#include <stdio.h>

int main() {
    int valor = 0, soma = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor < 40)
        {
            soma += valor;
        }
    }
    printf("A soma dos valores menores que 40 é: %d\n", soma);
    return 0;
}