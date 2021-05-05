#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite um valor: ");
    scanf("%d", &valor1);
    printf("Digite um outro valor: ");
    scanf("%d", &valor2);
    if (valor1 > valor2)
    {
        printf("Valores em ordem crescente: %d, %d\n", valor2, valor1);
    } 
    else if (valor1 == valor2)
    {
        printf("Os valores são iguais.\n", valor1, valor2);
    }
    else
    {
        printf("Valores em ordem crescente: %d, %d\n", valor1, valor2);
    }
    
}