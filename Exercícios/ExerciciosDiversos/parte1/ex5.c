#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o lado A do triângulo: ");
    scanf("%f", &a);
    printf("Digite o lado B do triângulo: ");
    scanf("%f", &b);
    printf("Digite o lado C do triângulo: ");
    scanf("%f", &c);

    if (c + b > a && a + b > c && c + a > b) {
        printf("Não forma um triângulo\n");
    }
    else
    {
        printf("Forma um triângulo\n");
    }
    
}