#include <stdio.h>

int main() {
    float salario, reajuste, salario_ajustado;

    printf("Digite seu salário em R$");
    scanf("%f", &salario);
    printf("Digite o reajuste em porcentagem: ");
    scanf("%f", &reajuste);

    reajuste = salario * (reajuste / 100);
    salario_ajustado = salario - reajuste;

    printf("O salário reajustado será de R$%.2f\n", salario_ajustado);

    return 0;
}